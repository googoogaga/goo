include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/cols/lst.o \
	goo/cols/str.o \
	eval/top.o \
	goo/io/read.o \
	eval/syntax.o \
	goo/cols/range.o \
	goo/cols/seq.o \
	goo/cols/opts.o \
	goo.o \
	goo/system.o \
	goo/cols/col.o \
	goo/cols/flat.o \
	goo/cols/zip.o \
	goo/macros.o \
	goo/io/port.o \
	goo/eval.o \
	eval/ast-linearize.o \
	goo/runtime.o \
	goo/cols/seqx.o \
	goo/cols/vec.o \
	goo/cols/step.o \
	goo/cols/cycle.o \
	eval/dependency.o \
	goo/boot.o \
	eval/ast-eval.o \
	goo/cols/map.o \
	goo/cols/rep.o \
	goo/types.o \
	goo/math.o \
	goo/user.o \
	goo/cols.o \
	goo/cols/tup.o \
	goo/cols/tab.o \
	goo/io/write.o \
	eval/main.o \
	goo/mag.o \
	goo/cols/colx.o \
	eval/g2c.o \
	goo/packer.o \
	goo/app.o \
	eval/ast.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
