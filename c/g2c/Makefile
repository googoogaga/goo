C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	eval/ast-eval.o \
	eval/main.o \
	goo/class.o \
	eval/dependency.o \
	goo.o \
	goo/macros.o \
	goo/functional.o \
	goo/cols/vec.o \
	goo/math.o \
	goo/%math.o \
	goo/chr.o \
	goo/cols/seqx.o \
	goo/app.o \
	goo/late-macros.o \
	eval/top.o \
	time/threads.o \
	time/%threads.o \
	time/lock.o \
	time/%lock.o \
	eval/g2c.o \
	goo/boot.o \
	goo/types.o \
	goo/eval.o \
	goo/cols/seq.o \
	goo/cols/lst.o \
	goo/io/write.o \
	eval/ast-linearize.o \
	goo/any.o \
	goo/cols/flat.o \
	goo/packer.o \
	goo/fun.o \
	eval/ast.o \
	goo/mag.o \
	goo/cols/cycle.o \
	eval/module.o \
	goo/user.o \
	goo/cols/opts.o \
	goo/cols/colx.o \
	goo/sym.o \
	goo/cols/zip.o \
	goo/cols/rep.o \
	goo/cols/step.o \
	goo/io/port.o \
	goo/io/%port.o \
	goo/system.o \
	goo/%system.o \
	goo/cols/map.o \
	goo/cols.o \
	goo/io/read.o \
	eval/optimize.o \
	goo/loc.o \
	goo/cols/col.o \
	eval/syntax.o \
	goo/cols/tup.o \
	goo/conditions.o \
	goo/cols/range.o \
	goo/log.o \
	eval/typist.o \
	goo/cols/tab.o \
	time/event.o \
	time/%event.o \
	goo/cols/str.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
