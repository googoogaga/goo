include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	eval/ast.o \
	goo/io/write.o \
	goo/cols/str.o \
	goo/types.o \
	eval/ast-linearize.o \
	goo/cols/range.o \
	goo/boot.o \
	goo/cols/rep.o \
	goo/app.o \
	goo/cols/tup.o \
	goo.o \
	goo/cols/opts.o \
	goo/macros.o \
	eval/top.o \
	goo/math.o \
	goo/mag.o \
	goo/io/read.o \
	goo/cols/cycle.o \
	goo/cols.o \
	goo/cols/col.o \
	goo/cols/map.o \
	goo/cols/flat.o \
	eval/dependency.o \
	goo/eval.o \
	goo/cols/lst.o \
	goo/cols/seqx.o \
	goo/cols/vec.o \
	goo/cols/zip.o \
	goo/cols/step.o \
	goo/system.o \
	eval/ast-eval.o \
	eval/g2c.o \
	eval/main.o \
	eval/syntax.o \
	goo/packer.o \
	goo/user.o \
	goo/cols/seq.o \
	goo/runtime.o \
	goo/cols/colx.o \
	goo/cols/tab.o \
	goo/io/port.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
