include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/cols/range.o \
	x8r/main.o \
	goo/cols/map.o \
	goo/cols/step.o \
	goo/app.o \
	x8r/ast-linearize.o \
	goo/cols/cycle.o \
	goo/cols/seq.o \
	goo/io/write.o \
	goo/cols/zip.o \
	goo/system.o \
	goo/user.o \
	goo/cols/str.o \
	goo.o \
	x8r/g2c.o \
	goo/boot.o \
	goo/cols/tab.o \
	x8r/ast-eval.o \
	goo/types.o \
	x8r/ast.o \
	goo/io/port.o \
	goo/cols/opts.o \
	goo/math.o \
	goo/cols/assoc.o \
	x8r/top.o \
	goo/packer.o \
	goo/cols/col.o \
	x8r/dependency.o \
	goo/mag.o \
	goo/macros.o \
	goo/cols/lst.o \
	goo/cols/seqx.o \
	goo/eval.o \
	goo/cols/colx.o \
	goo/cols/buf.o \
	goo/cols/vec.o \
	goo/io/read.o \
	goo/cols/flat.o \
	x8r/syntax.o \
	goo/runtime.o \
	goo/cols.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
