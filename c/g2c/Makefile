include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	p2c.o \
	read.o \
	runtime.o \
	proto/system.o \
	proto/user.o \
	ast.o \
	proto.o \
	ast-eval.o \
	strings.o \
	top.o \
	ast-linearize.o \
	main.o \
	macros.o \
	syntax.o \
	write.o \
	boot.o \
	proto/eval.o \
	p2c-init.o

p2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -o p2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f p2c $(OBJS)
