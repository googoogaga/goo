include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/app.o \
	goo/cols/tab.o \
	x8r/g2c.o \
	goo/cols/seqx.o \
	goo/cols/seq.o \
	goo.o \
	goo/system.o \
	goo/cols/range.o \
	goo/cols/zip.o \
	goo/macros.o \
	goo/io/write.o \
	goo/cols/opts.o \
	goo/cols/col.o \
	x8r/syntax.o \
	goo/mag.o \
	goo/cols/flat.o \
	x8r/ast-eval.o \
	goo/types.o \
	goo/cols/rep.o \
	goo/cols/vec.o \
	x8r/ast.o \
	x8r/dependency.o \
	goo/math.o \
	x8r/top.o \
	goo/io/port.o \
	goo/eval.o \
	x8r/main.o \
	x8r/ast-linearize.o \
	goo/cols/map.o \
	goo/cols.o \
	goo/cols/tup.o \
	goo/cols/str.o \
	goo/runtime.o \
	goo/cols/colx.o \
	goo/io/read.o \
	goo/cols/cycle.o \
	goo/boot.o \
	goo/cols/step.o \
	goo/packer.o \
	goo/cols/lst.o \
	goo/user.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
