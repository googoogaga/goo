include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/eval.o \
	goo/app.o \
	goo/cols/flat.o \
	x8r/main.o \
	goo/cols/opts.o \
	goo/runtime.o \
	goo/cols/colx.o \
	goo/io/write.o \
	x8r/dependency.o \
	goo/cols.o \
	goo/types.o \
	goo/mag.o \
	goo/cols/map.o \
	goo.o \
	goo/boot.o \
	goo/cols/range.o \
	goo/cols/buf.o \
	x8r/syntax.o \
	x8r/ast-eval.o \
	goo/cols/tab.o \
	goo/io/read.o \
	goo/user.o \
	goo/io/port.o \
	goo/math.o \
	x8r/ast.o \
	goo/cols/zip.o \
	goo/cols/seq.o \
	goo/cols/lst.o \
	goo/packer.o \
	goo/cols/step.o \
	goo/cols/col.o \
	goo/system.o \
	goo/macros.o \
	goo/cols/vec.o \
	goo/cols/seqx.o \
	x8r/g2c.o \
	x8r/ast-linearize.o \
	goo/cols/assoc.o \
	goo/cols/str.o \
	x8r/top.o \
	goo/cols/cycle.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
