C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) $(CFLAGS) -I.. -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/system.o \
	goo/macros.o \
	eval/main.o \
	goo/cols/tup.o \
	goo/math.o \
	goo/cols/seqx.o \
	goo/user.o \
	goo/cols/col.o \
	eval/g2c.o \
	goo/cols/seq.o \
	goo/cols/colx.o \
	goo/cols/map.o \
	goo/cols/opts.o \
	eval/ast-linearize.o \
	goo/cols/flat.o \
	goo/io/port.o \
	goo/cols/vec.o \
	goo/eval.o \
	goo/cols/zip.o \
	eval/ast.o \
	goo/cols.o \
	goo/cols/cycle.o \
	goo/cols/lst.o \
	goo.o \
	eval/syntax.o \
	goo/cols/step.o \
	goo/io/read.o \
	eval/top.o \
	goo/mag.o \
	goo/cols/range.o \
	goo/app.o \
	goo/cols/rep.o \
	goo/types.o \
	goo/cols/str.o \
	eval/dependency.o \
	goo/cols/tab.o \
	goo/boot.o \
	goo/packer.o \
	goo/runtime.o \
	eval/ast-eval.o \
	goo/io/write.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LD_FLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
