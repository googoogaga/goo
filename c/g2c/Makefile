C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/eval.o \
	goo/system.o \
	eval/g2c.o \
	goo/cols/flat.o \
	goo/cols/range.o \
	eval/dependency.o \
	goo/app.o \
	goo/cols.o \
	goo/cols/step.o \
	goo/cols/rep.o \
	goo/math.o \
	goo/io/read.o \
	goo/io/write.o \
	time/event.o \
	time/%event.o \
	goo.o \
	goo/boot.o \
	cols/pipe.o \
	goo/io/port.o \
	eval/ast-linearize.o \
	goo/cols/tup.o \
	time/lock.o \
	time/%lock.o \
	eval/main.o \
	goo/mag.o \
	goo/user.o \
	eval/ast-eval.o \
	goo/cols/seq.o \
	goo/macros.o \
	goo/late-macros.o \
	goo/types.o \
	goo/packer.o \
	goo/cols/vec.o \
	time/threads.o \
	time/%threads.o \
	goo/cols/col.o \
	goo/cols/seqx.o \
	goo/cols/lst.o \
	goo/conditions.o \
	goo/cols/cycle.o \
	goo/random.o \
	eval/ast.o \
	eval/syntax.o \
	goo/cols/str.o \
	goo/cols/colx.o \
	goo/cols/tab.o \
	goo/cols/zip.o \
	goo/cols/map.o \
	goo/runtime.o \
	eval/top.o \
	goo/cols/opts.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
