C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	eval/syntax.o \
	goo/packer.o \
	goo/eval.o \
	eval/main.o \
	goo/cols/rep.o \
	goo/cols/vec.o \
	goo/system.o \
	goo/%system.o \
	goo/cols/tup.o \
	goo/boot.o \
	eval/ast.o \
	goo/cols/opts.o \
	goo/cols/lst.o \
	goo/cols/flat.o \
	goo/cols/seqx.o \
	eval/ast-linearize.o \
	eval/dependency.o \
	goo/conditions.o \
	goo/cols/colx.o \
	goo/cols/seq.o \
	goo/io/write.o \
	goo/app.o \
	goo/cols/col.o \
	goo/io/port.o \
	goo/io/%port.o \
	goo/user.o \
	goo/cols.o \
	goo.o \
	goo/sym.o \
	eval/top.o \
	goo/macros.o \
	goo/functional.o \
	goo/loc.o \
	goo/math.o \
	goo/%math.o \
	goo/mag.o \
	goo/types.o \
	goo/class.o \
	goo/fun.o \
	goo/io/read.o \
	goo/cols/cycle.o \
	goo/cols/zip.o \
	goo/cols/map.o \
	eval/ast-eval.o \
	goo/cols/tab.o \
	goo/cols/step.o \
	eval/g2c.o \
	goo/cols/range.o \
	goo/late-macros.o \
	eval/optimize.o \
	eval/typist.o \
	goo/cols/str.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
