.c.o: ../prt.h
	cc -I.. -c -g -O -o $@ $<

OBJS = \
	macros.o \
	write.o \
	read.o \
	runtime.o \
	strings.o \
	p2c.o \
	top.o \
	syntax.o \
	boot.o \
	main.o \
	ast-eval.o \
	ast.o \
	ast-linearize.o \
	p2c-init.o

p2c: ../prt.o $(OBJS)
	cc -o p2c ../prt.o $(OBJS) ../gc.a

clean:
	rm -f p2c ../prt.o $(OBJS)
