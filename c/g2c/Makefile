include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/cols/cycle.o \
	goo/packer.o \
	goo/cols/opts.o \
	goo/cols/seq.o \
	goo/cols/zip.o \
	x8r/ast-eval.o \
	goo/cols/col.o \
	goo/types.o \
	goo/cols.o \
	goo/io/read.o \
	goo/cols/seqx.o \
	goo/cols/lst.o \
	goo/app.o \
	x8r/dependency.o \
	x8r/main.o \
	goo/eval.o \
	goo/io/port.o \
	x8r/ast-linearize.o \
	goo/runtime.o \
	goo/cols/rep.o \
	goo.o \
	goo/cols/vec.o \
	goo/cols/tab.o \
	goo/user.o \
	goo/cols/colx.o \
	goo/cols/tup.o \
	goo/cols/str.o \
	goo/system.o \
	x8r/g2c.o \
	x8r/top.o \
	goo/macros.o \
	goo/cols/step.o \
	goo/cols/map.o \
	goo/boot.o \
	goo/cols/flat.o \
	goo/io/write.o \
	x8r/syntax.o \
	x8r/ast.o \
	goo/cols/range.o \
	goo/cols/assoc.o \
	goo/math.o \
	goo/mag.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
