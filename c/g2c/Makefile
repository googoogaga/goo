include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	cc -I.. -c -g -O -o $@ $<

OBJS = \
	p2c.o \
	top.o \
	proto.o \
	syntax.o \
	proto/system.o \
	ast-eval.o \
	write.o \
	read.o \
	runtime.o \
	proto/user.o \
	proto/eval.o \
	ast-linearize.o \
	strings.o \
	ast.o \
	boot.o \
	main.o \
	macros.o \
	p2c-init.o

p2c: $(C_OBJS_DD) $(OBJS)
	cc -o p2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f p2c $(OBJS)
