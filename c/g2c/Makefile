C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/fun.o \
	goo/random.o \
	goo/cols/colx.o \
	goo/cols.o \
	goo/cols/map.o \
	eval/dependency.o \
	goo.o \
	goo/user.o \
	goo/cols/cycle.o \
	eval/typist.o \
	goo/cols/opts.o \
	eval/syntax.o \
	goo/sym.o \
	goo/types.o \
	goo/cols/zip.o \
	goo/system.o \
	goo/%system.o \
	goo/any.o \
	goo/cols/step.o \
	goo/mag.o \
	eval/ast-linearize.o \
	goo/loc.o \
	time/threads.o \
	time/%threads.o \
	goo/cols/tup.o \
	eval/main.o \
	goo/io/read.o \
	goo/boot.o \
	goo/cols/rep.o \
	eval/top.o \
	time/lock.o \
	time/%lock.o \
	goo/cols/flat.o \
	goo/class.o \
	eval/ast-eval.o \
	eval/ast.o \
	goo/cols/range.o \
	goo/cols/col.o \
	goo/cols/seqx.o \
	goo/conditions.o \
	goo/functional.o \
	goo/cols/tab.o \
	goo/cols/lst.o \
	eval/module.o \
	eval/optimize.o \
	goo/packer.o \
	time/event.o \
	time/%event.o \
	goo/app.o \
	goo/io/port.o \
	goo/io/%port.o \
	goo/log.o \
	goo/cols/vec.o \
	goo/chr.o \
	goo/cols/str.o \
	goo/late-macros.o \
	goo/cols/seq.o \
	goo/eval.o \
	goo/io/write.o \
	goo/macros.o \
	goo/math.o \
	goo/%math.o \
	eval/g2c.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
