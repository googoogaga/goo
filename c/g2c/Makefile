include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/eval.o \
	goo/system.o \
	goo/cols/vec.o \
	goo/cols/map.o \
	goo/cols/zip.o \
	goo/app.o \
	goo/user.o \
	goo/mag.o \
	eval/main.o \
	goo/cols.o \
	goo/cols/step.o \
	eval/dependency.o \
	eval/ast.o \
	goo/boot.o \
	goo/cols/seq.o \
	goo/cols/opts.o \
	goo/types.o \
	goo/io/write.o \
	goo/cols/cycle.o \
	goo/runtime.o \
	goo/cols/colx.o \
	eval/syntax.o \
	goo/io/port.o \
	eval/top.o \
	goo/cols/rep.o \
	eval/ast-eval.o \
	goo/cols/tup.o \
	eval/ast-linearize.o \
	goo/cols/lst.o \
	goo/packer.o \
	goo/cols/tab.o \
	goo.o \
	goo/cols/flat.o \
	goo/io/read.o \
	eval/g2c.o \
	goo/math.o \
	goo/cols/col.o \
	goo/cols/seqx.o \
	goo/cols/str.o \
	goo/cols/range.o \
	goo/macros.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
