C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	eval/ast-linearize.o \
	goo/cols/str.o \
	goo/user.o \
	goo/io/read.o \
	eval/syntax.o \
	goo/cols/tab.o \
	goo/cols/range.o \
	goo/functional.o \
	goo/types.o \
	eval/top.o \
	goo/cols/vec.o \
	goo/chr.o \
	eval/ast.o \
	goo/any.o \
	goo/cols/seqx.o \
	goo/app.o \
	goo.o \
	goo/sym.o \
	goo/mag.o \
	goo/cols/map.o \
	goo/cols/seq.o \
	goo/cols/lst.o \
	eval/main.o \
	eval/g2c.o \
	goo/late-macros.o \
	goo/cols/flat.o \
	eval/ast-eval.o \
	goo/packer.o \
	goo/boot.o \
	goo/eval.o \
	goo/class.o \
	eval/typist.o \
	eval/optimize.o \
	goo/cols/colx.o \
	goo/io/write.o \
	goo/cols/opts.o \
	goo/cols/rep.o \
	goo/log.o \
	eval/module.o \
	eval/dependency.o \
	goo/fun.o \
	goo/cols/cycle.o \
	goo/io/port.o \
	goo/io/%port.o \
	goo/cols/zip.o \
	goo/cols/col.o \
	goo/cols.o \
	goo/loc.o \
	goo/cols/tup.o \
	goo/conditions.o \
	goo/macros.o \
	goo/system.o \
	goo/%system.o \
	goo/cols/step.o \
	goo/math.o \
	goo/%math.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
