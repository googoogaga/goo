include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/cols/colx.o \
	goo/io/write.o \
	goo/app.o \
	goo/math.o \
	goo/cols/flat.o \
	goo/mag.o \
	goo/cols/cycle.o \
	goo/types.o \
	goo/cols/vec.o \
	goo/boot.o \
	goo/user.o \
	x8r/top.o \
	goo/io/port.o \
	goo/cols/seqx.o \
	x8r/ast-eval.o \
	goo/cols/step.o \
	goo/io/read.o \
	goo/system.o \
	goo/cols/col.o \
	goo/cols/assoc.o \
	goo/cols/map.o \
	goo/runtime.o \
	goo/cols/tab.o \
	goo.o \
	goo/eval.o \
	x8r/ast-linearize.o \
	goo/packer.o \
	goo/cols/range.o \
	x8r/syntax.o \
	goo/cols/zip.o \
	goo/cols/str.o \
	x8r/g2c.o \
	goo/macros.o \
	x8r/dependency.o \
	goo/cols/seq.o \
	goo/cols/buf.o \
	goo/cols/lst.o \
	goo/cols/opts.o \
	x8r/main.o \
	goo/cols.o \
	x8r/ast.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
