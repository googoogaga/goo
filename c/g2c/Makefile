include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	cc -I.. -c -g -O -o $@ $<

OBJS = \
	ast-linearize.o \
	proto/eval.o \
	proto/system.o \
	boot.o \
	p2c.o \
	top.o \
	ast.o \
	runtime.o \
	read.o \
	syntax.o \
	proto.o \
	macros.o \
	main.o \
	strings.o \
	write.o \
	ast-eval.o \
	proto/user.o \
	p2c-init.o

p2c: $(C_OBJS_DD) $(OBJS)
	cc -o p2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f p2c $(OBJS)
