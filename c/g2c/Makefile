include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -g -O -o $@ $<

OBJS = \
	goo/runtime.o \
	eval/ast-linearize.o \
	goo/system.o \
	eval/top.o \
	goo/cols/opts.o \
	goo/cols/seqx.o \
	goo/cols/map.o \
	goo/cols/tup.o \
	goo/cols/zip.o \
	goo/cols/col.o \
	eval/main.o \
	eval/syntax.o \
	goo/app.o \
	goo/cols/range.o \
	goo/cols/cycle.o \
	goo/io/port.o \
	goo/cols.o \
	goo/eval.o \
	goo/cols/tab.o \
	goo/cols/lst.o \
	goo/math.o \
	goo/cols/seq.o \
	goo/macros.o \
	eval/dependency.o \
	goo/types.o \
	goo/user.o \
	goo/cols/vec.o \
	eval/g2c.o \
	goo/cols/colx.o \
	eval/ast.o \
	goo/io/read.o \
	goo/cols/rep.o \
	goo/mag.o \
	goo.o \
	goo/cols/str.o \
	goo/packer.o \
	goo/boot.o \
	eval/ast-eval.o \
	goo/io/write.o \
	goo/cols/flat.o \
	goo/cols/step.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LD_OPTS) -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
