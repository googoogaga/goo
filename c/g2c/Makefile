include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/cols/colx.o \
	x8r/syntax.o \
	goo/eval.o \
	goo/io/port.o \
	goo/cols/map.o \
	goo/io/read.o \
	goo.o \
	goo/cols/zip.o \
	goo/boot.o \
	goo/system.o \
	goo/cols.o \
	goo/types.o \
	goo/cols/opts.o \
	goo/io/write.o \
	goo/cols/flat.o \
	x8r/main.o \
	goo/cols/tab.o \
	x8r/ast.o \
	goo/cols/vec.o \
	x8r/ast-linearize.o \
	x8r/g2c.o \
	goo/runtime.o \
	goo/cols/seq.o \
	goo/cols/assoc.o \
	goo/cols/step.o \
	goo/math.o \
	goo/cols/str.o \
	goo/cols/buf.o \
	x8r/dependency.o \
	goo/cols/range.o \
	goo/user.o \
	goo/cols/col.o \
	goo/macros.o \
	goo/app.o \
	goo/cols/seqx.o \
	x8r/ast-eval.o \
	goo/packer.o \
	goo/mag.o \
	x8r/top.o \
	goo/cols/lst.o \
	goo/cols/cycle.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
