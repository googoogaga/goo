include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	main.o \
	ast-eval.o \
	proto.o \
	read.o \
	write.o \
	runtime.o \
	ast-linearize.o \
	p2c.o \
	macros.o \
	boot.o \
	syntax.o \
	strings.o \
	proto/user.o \
	top.o \
	proto/system.o \
	proto/eval.o \
	ast.o \
	p2c-init.o

p2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o p2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f p2c $(OBJS)
