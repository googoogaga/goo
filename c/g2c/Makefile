include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	cc -I.. -c -g -O -o $@ $<

OBJS = \
	runtime.o \
	ast-linearize.o \
	write.o \
	ast.o \
	syntax.o \
	main.o \
	strings.o \
	proto/user.o \
	boot.o \
	read.o \
	ast-eval.o \
	top.o \
	proto/system.o \
	p2c.o \
	proto/eval.o \
	macros.o \
	proto.o \
	p2c-init.o

p2c: $(C_OBJS_DD) $(OBJS)
	cc -o p2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f p2c $(OBJS)
