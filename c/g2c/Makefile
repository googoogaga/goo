C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/x.o \
	goo/class.o \
	goo/cols/vec.o \
	goo/app.o \
	goo/log.o \
	goo/user.o \
	goo/chr.o \
	eval/main.o \
	goo/late-macros.o \
	time/threads.o \
	time/%threads.o \
	eval/ast-linearize.o \
	goo/cols/seq.o \
	goo/cols.o \
	goo/cols/seqx.o \
	goo/eval.o \
	goo/io/write.o \
	goo/math.o \
	goo/%math.o \
	goo/packer.o \
	goo/cols/lst.o \
	goo/cols/cycle.o \
	goo/random.o \
	goo/cols/map.o \
	goo/cols/colx.o \
	goo.o \
	eval/dependency.o \
	goo/macros.o \
	time/lock.o \
	time/%lock.o \
	goo/cols/flat.o \
	goo/cols/zip.o \
	gl.o \
	goo/cols/rep.o \
	eval/syntax.o \
	goo/cols/step.o \
	goo/types.o \
	goo/fun.o \
	goo/system.o \
	goo/%system.o \
	goo/any.o \
	goo/cols/opts.o \
	eval/ast.o \
	goo/io/read.o \
	time/event.o \
	time/%event.o \
	eval/ast-eval.o \
	goo/cols/tab.o \
	goo/mag.o \
	goo/loc.o \
	eval/optimize.o \
	goo/boot.o \
	goo/cols/tup.o \
	goo/sym.o \
	goo/cols/range.o \
	eval/g2c.o \
	goo/cols/str.o \
	goo/cols/col.o \
	goo/functional.o \
	eval/top.o \
	eval/module.o \
	goo/conditions.o \
	goo/io/port.o \
	goo/io/%port.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS) -lglut

clean:
	rm -f g2c $(OBJS)
