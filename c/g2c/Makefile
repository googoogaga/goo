C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/cols/opts.o \
	goo/chr.o \
	goo/io/write.o \
	time/event.o \
	time/%event.o \
	goo/cols/cycle.o \
	time/threads.o \
	time/%threads.o \
	goo/cols/seq.o \
	eval/g2c.o \
	goo/math.o \
	goo/%math.o \
	eval/ast-linearize.o \
	goo/cols/zip.o \
	eval/ast-eval.o \
	eval/dependency.o \
	goo.o \
	goo/cols/step.o \
	time/lock.o \
	time/%lock.o \
	eval/optimize.o \
	goo/eval.o \
	eval/syntax.o \
	goo/cols/colx.o \
	eval/ast.o \
	goo/macros.o \
	goo/io/read.o \
	goo/cols.o \
	goo/system.o \
	goo/%system.o \
	goo/sym.o \
	goo/cols/seqx.o \
	goo/types.o \
	goo/fun.o \
	goo/any.o \
	goo/cols/range.o \
	goo/boot.o \
	goo/mag.o \
	goo/conditions.o \
	goo/loc.o \
	goo/cols/rep.o \
	goo/cols/flat.o \
	goo/cols/map.o \
	eval/main.o \
	goo/random.o \
	goo/io/port.o \
	goo/io/%port.o \
	goo/user.o \
	goo/cols/lst.o \
	eval/module.o \
	goo/cols/col.o \
	goo/cols/tab.o \
	goo/packer.o \
	goo/x.o \
	goo/functional.o \
	goo/bignum.o \
	goo/cols/vec.o \
	goo/late-macros.o \
	goo/class.o \
	goo/cols/str.o \
	goo/cols/tup.o \
	goo/app.o \
	goo/log.o \
	eval/top.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS) -lgmp

clean:
	rm -f g2c $(OBJS)
