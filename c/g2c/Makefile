include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	x8r/ast-linearize.o \
	x8r/ast.o \
	goo/io/port.o \
	goo/io/read.o \
	goo/cols/vec.o \
	x8r/top.o \
	x8r/main.o \
	x8r/syntax.o \
	goo/cols.o \
	goo/mag.o \
	goo/app.o \
	goo/cols/col.o \
	x8r/ast-eval.o \
	goo/types.o \
	goo/cols/buf.o \
	goo/cols/step.o \
	goo/cols/seq.o \
	goo/system.o \
	goo/runtime.o \
	goo/user.o \
	goo/cols/cycle.o \
	goo/math.o \
	goo/cols/colx.o \
	goo/cols/zip.o \
	goo/cols/seqx.o \
	x8r/dependency.o \
	goo/cols/lst.o \
	goo/cols/tab.o \
	goo/macros.o \
	goo/io/write.o \
	goo/eval.o \
	goo/packer.o \
	goo/cols/range.o \
	goo/cols/map.o \
	goo.o \
	goo/cols/str.o \
	goo/cols/opts.o \
	goo/boot.o \
	goo/cols/assoc.o \
	x8r/g2c.o \
	goo/cols/flat.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
