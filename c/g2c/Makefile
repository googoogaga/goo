include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	proto.o \
	proto/system.o \
	read.o \
	ast-eval.o \
	top.o \
	runtime.o \
	ast.o \
	strings.o \
	ast-linearize.o \
	main.o \
	proto/eval.o \
	write.o \
	boot.o \
	p2c.o \
	syntax.o \
	proto/user.o \
	macros.o \
	p2c-init.o

p2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -o p2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f p2c $(OBJS)
