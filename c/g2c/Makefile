include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/cols/flat.o \
	eval/syntax.o \
	goo/math.o \
	goo/cols/rep.o \
	goo/macros.o \
	goo/cols/seqx.o \
	eval/main.o \
	goo/cols.o \
	goo/cols/map.o \
	goo/user.o \
	eval/ast-eval.o \
	eval/g2c.o \
	goo/app.o \
	goo.o \
	eval/top.o \
	goo/cols/cycle.o \
	goo/io/port.o \
	goo/io/write.o \
	goo/runtime.o \
	eval/ast-linearize.o \
	goo/mag.o \
	goo/cols/colx.o \
	goo/cols/tab.o \
	goo/cols/step.o \
	goo/cols/opts.o \
	goo/cols/range.o \
	goo/eval.o \
	goo/types.o \
	goo/cols/seq.o \
	goo/packer.o \
	goo/cols/vec.o \
	goo/boot.o \
	eval/dependency.o \
	goo/cols/str.o \
	eval/ast.o \
	goo/cols/col.o \
	goo/cols/tup.o \
	goo/io/read.o \
	goo/system.o \
	goo/cols/lst.o \
	goo/cols/zip.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
