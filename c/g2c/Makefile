.c.o: ../prt.h
	cc -I.. -c -g -O -o $@ $<

OBJS = \
	boot.o \
	syntax.o \
	macros.o \
	strings.o \
	top.o \
	p2c.o \
	write.o \
	read.o \
	ast.o \
	ast-eval.o \
	runtime.o \
	main.o \
	ast-linearize.o \
	p2c-init.o

p2c: ../prt.o $(OBJS)
	cc -o p2c ../prt.o $(OBJS) ../gc.a

clean:
	rm -f p2c ../prt.o $(OBJS)
