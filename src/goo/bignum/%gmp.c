#include <gmp.h>
#include "grt.h"

#define MODN(name) YgooSbignumSgmpYP##name

#define MAX_GOO_FIXNUM 0x1FFFFFFF
#define MIN_GOO_FIXNUM -0x20000000

EXT(Ytup,"goo/boot","tup");
EXT(YLbignumG,"goo/bignum/gmp","<bignum>");

// checks if the mpz will fit in a GOO fixnum (long - 2 tag bits)
static inline int mpz_fits_fixnum(mpz_ptr z)
{
	mp_size_t size = z->_mp_size;
	mp_limb_t data = z->_mp_d[0];

	return (size == 0
			|| (size == 1  && data <= MAX_GOO_FIXNUM)
			|| (size == -1 && data <= - (mp_limb_t) MIN_GOO_FIXNUM));

}

// returns a GOO integer
// assumes you already checked that it fits
static inline P mpz_to_fixnum(mpz_ptr z)
{
	mp_size_t size = z->_mp_size;
	mp_limb_t low_limb = z->_mp_d[0];

	if (size > 0)
		return (P)tag((P)(PINT)low_limb, int_tag);
	else if (size < 0)
		return (P)tag((P)(PINT)-(long)low_limb, int_tag);
	else
		return (P)tag(0, int_tag);

}

static inline P mpz_to_bignum(mpz_ptr p)
{
	P obj = (P)allocate(sizeof(P)+sizeof(__mpz_struct));
	YPobject_class_setter(YLbignumG, obj);
	mpz_ptr newp = (mpz_ptr)(obj+1);
	*newp = *p;
	return obj;
}

static inline mpz_ptr bignum_to_mpz(P obj)
{
	return (mpz_ptr)(obj+1);
}

P mpz_to_goo(mpz_ptr result)
{
	if(mpz_fits_fixnum(result))
		return mpz_to_fixnum(result);
	else 
		return mpz_to_bignum(result);
}

#define DEFINE_B_B(name, fun) \
P MODN(name) (P op1, P op2) \
{ \
	mpz_t z; \
	fun (z, bignum_to_mpz(op1), bignum_to_mpz(op2)); \
	return mpz_to_goo(z); \
}

#define DEFINE_B_I(name, fun) \
P MODN(name) (P op1, P op2) \
{ \
	mpz_t z; \
	fun (z, bignum_to_mpz(op1), untag(op2)); \
	return mpz_to_goo(z); \
}

#define DEFINE_B(name, fun) \
P MODN(name) (P op) \
{ \
	mpz_t z; \
	fun (z, bignum_to_mpz(op)); \
	return mpz_to_goo(z); \
}

/*
  Addition, subtraction, multiplication
*/

// define the functions
DEFINE_B_B(add_b_b, mpz_add)

// special case necessary for add and subtract as there is no function
// which operates on signed ints.
P MODN(add_b_i) (P op1, P op2)
{
	mpz_t z;
	if (op2 >= 0)
		mpz_add_ui(z, bignum_to_mpz(op1), untag(op2));
	else
		mpz_sub_ui(z, bignum_to_mpz(op1), -untag(op2));
	return mpz_to_goo(z);
}

DEFINE_B_B(sub_b_b, mpz_sub)

P MODN(sub_b_i) (P op1, P op2)
{
	mpz_t z;
	if (op2 >= 0)
		mpz_sub_ui(z, bignum_to_mpz(op1), untag(op2));
	else
		mpz_add_ui(z, bignum_to_mpz(op1), -untag(op2));
	return mpz_to_goo(z);
}

P MODN(sub_i_b) (P op1, P op2)
{
	mpz_t z;
	if (op1 >= 0)
		mpz_sub_ui(z, bignum_to_mpz(op2), untag(op1));
	else
		mpz_add_ui(z, bignum_to_mpz(op2), -untag(op1));
	mpz_neg(z, z);
	return mpz_to_goo(z);
}

DEFINE_B_B(mul_b_b, mpz_mul)
DEFINE_B_I(mul_b_i, mpz_mul_si)

DEFINE_B(neg_b, mpz_neg)

// cannot call these with negative shifts
DEFINE_B_I(rsh_b_i, mpz_fdiv_q_2exp)
DEFINE_B_I(lsh_b_i, mpz_mul_2exp)

/*
  comparison
*/

P MODN(cmp_b_b) (P op1, P op2)
{
	return YPib((P)mpz_cmp(bignum_to_mpz(op1), bignum_to_mpz(op2)));
}

P MODN(sgn_b) (P op)
{
	return YPib((P)mpz_sgn(bignum_to_mpz(op)));
}

P MODN(oddp_b) (P op)
{
	return YPbb((P)mpz_odd_p(bignum_to_mpz(op)));
}

/*
  bit fiddling
*/
DEFINE_B_B(and_b_b, mpz_and)
DEFINE_B_B(ior_b_b, mpz_ior)
DEFINE_B_B(xor_b_b, mpz_xor)
DEFINE_B(com_b, mpz_com)

P MODN(bitQ_b_i) (P op, P index)
{
	return YPbb(mpz_tstbit(bignum_to_mpz(op), untag(index)));
}

/*
   division
*/
DEFINE_B_B(tdiv_q_b_b, mpz_tdiv_q)
DEFINE_B_B(tdiv_r_b_b, mpz_tdiv_r)

P MODN(tdiv_qr_b_b) (P op1, P op2)
{
	mpz_t q, r;
	mpz_tdiv_qr(q, r, bignum_to_mpz(op1), bignum_to_mpz(op2));
	return XXCALLN(1, Ytup, 2, mpz_to_goo(q), mpz_to_goo(r));
}

// the remainder will always be smaller than the divisor, and that fits
// in a goo-int, so the result must fit in a goo-int
P MODN(tdiv_r_b_i) (P op1, P op2)
{
	long r;
	mpz_ptr op1m = bignum_to_mpz(op1);
	PINT d = (op2 > 0)?untag(op2):-untag(op2);
	r = mpz_tdiv_ui(op1m, d);
	if(mpz_sgn(op1m) < 0)
		r = -r;
	return (P)tag((P)r, int_tag);
	
}

P MODN(tdiv_q_b_i) (P op1, P op2)
{
	mpz_t q;
	PINT d = (op2 > 0)?untag(op2):-untag(op2);
	mpz_tdiv_q_ui(q, bignum_to_mpz(op1), d);
	if(op2<0)
		mpz_neg(q,q);
	return mpz_to_goo(q);
}

P MODN(tdiv_qr_b_i) (P op1, P op2)
{
	mpz_t q;
	long r;
	mpz_ptr op1m = bignum_to_mpz(op1);
	PINT d = (op2 > 0)?untag(op2):-untag(op2);
	r = mpz_tdiv_q_ui(q, op1m, d);
	if(mpz_sgn(op1m) < 0)
		r = -r;
	if(op2<0)
		mpz_neg(q,q);
    return XXCALLN(1, Ytup, 2, mpz_to_goo(q), tag((P)r, int_tag));
}

/*
  powers
*/

// only works with positive exponent
DEFINE_B_I(pow_b_i, mpz_pow_ui)
