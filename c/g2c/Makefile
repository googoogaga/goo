include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/io/write.o \
	x8r/g2c.o \
	goo/cols/seqx.o \
	goo/cols/tab.o \
	goo/cols/range.o \
	goo/mag.o \
	goo/macros.o \
	goo/runtime.o \
	goo/cols/rep.o \
	goo/cols/tup.o \
	goo/packer.o \
	goo/types.o \
	goo/cols/colx.o \
	goo/boot.o \
	x8r/main.o \
	goo/cols/cycle.o \
	x8r/dependency.o \
	goo/system.o \
	goo/cols/str.o \
	goo/math.o \
	goo/eval.o \
	goo/app.o \
	goo/cols/lst.o \
	goo/cols/map.o \
	goo/io/port.o \
	goo.o \
	goo/io/read.o \
	goo/cols/assoc.o \
	goo/cols/col.o \
	goo/cols/step.o \
	goo/cols.o \
	x8r/ast-linearize.o \
	x8r/ast.o \
	goo/cols/vec.o \
	goo/cols/flat.o \
	goo/cols/seq.o \
	x8r/syntax.o \
	goo/cols/zip.o \
	x8r/top.o \
	goo/user.o \
	goo/cols/opts.o \
	x8r/ast-eval.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
