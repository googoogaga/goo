#include <grt.h>

/* ARITHMETIC */

INLINE P YgooSmathYPfE(P x, P y) {
  INTFLO ix, iy; ix.i = (PINT)x; iy.i = (PINT)y;
  return (P)(PLOG)(ix.f == iy.f);
}
INLINE P YgooSmathYPfL(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  return (P)(PLOG)(ix.f < iy.f);
}
INLINE P YgooSmathYPfA(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  iz.f = ix.f + iy.f;
  return (P)iz.i;
}
INLINE P YgooSmathYPf_(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  iz.f = ix.f - iy.f;
  return (P)iz.i;
}
INLINE P YgooSmathYPfT(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  iz.f = ix.f * iy.f;
  return (P)iz.i;
}
INLINE P YgooSmathYPfS(P x, P y) {
  INTFLO ix, iy, iz; ix.i = (PINT)x; iy.i = (PINT)y;
  iz.f = ix.f / iy.f;
  return (P)iz.i;
}
INLINE P YgooSmathYPfi2f(P x) {
  INTFLO ix; 
  ix.f = (float)(PINT)x;
  return (P)ix.i;
}
INLINE P YgooSmathYPft(P x) {
  PINT z; INTFLO ix; ix.i = (PINT)x; 
  z = (PINT)ix.f;
  return (P)z;
}
INLINE P YgooSmathYPfpow(P x, P n) {
  INTFLO iz, ix, in; ix.i = (PINT)x; in.i = (PINT)n; 
  iz.f = (float)pow((double)ix.f, (double)in.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPflog(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)log((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPfsqrt(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)sqrt((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPfsin(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)sin((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPfcos(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)cos((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPftan(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)tan((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPfsinh(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)sinh((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPfcosh(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)cosh((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPftanh(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)tanh((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPfasin(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)asin((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPfacos(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)acos((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPfatan(P x) {
  INTFLO iz, ix; ix.i = (PINT)x; 
  iz.f = (float)atan((double)ix.f);
  return (P)iz.i;
}
INLINE P YgooSmathYPfatan2(P y, P x) {
  INTFLO iz, ix, iy; ix.i = (PINT)x; iy.i = (PINT)y; 
  iz.f = (float)atan2((double)iy.f, (double)ix.f);
  return (P)iz.i;
}

INLINE P FLOINT (PFLO x) {
  INTFLO ix; ix.f = x;
  return (P)ix.i;
}

INLINE P YgooSmathYPflo_bits (P x) {
  return x;
}

