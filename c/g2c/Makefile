.c.o: ../prt.h
	cc -I.. -c -g -O -o $@ $<

OBJS = \
	p2c.o \
	syntax.o \
	read.o \
	ast-eval.o \
	macros.o \
	ast.o \
	strings.o \
	runtime.o \
	write.o \
	top.o \
	main.o \
	ast-linearize.o \
	boot.o \
	p2c-init.o

p2c: ../prt.o $(OBJS)
	cc -o p2c ../prt.o $(OBJS) ../gc.a

clean:
	rm -f p2c ../prt.o $(OBJS)
