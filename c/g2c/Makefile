C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/cols/step.o \
	goo/io/read.o \
	goo/io/write.o \
	goo/system.o \
	goo/app.o \
	eval/dependency.o \
	goo/cols/rep.o \
	goo/user.o \
	time/event.o \
	time/%event.o \
	goo/math.o \
	eval/main.o \
	cols/pipe.o \
	eval/top.o \
	time/threads.o \
	time/%threads.o \
	goo/random.o \
	goo.o \
	goo/cols.o \
	goo/cols/tup.o \
	eval/ast-eval.o \
	goo/boot.o \
	goo/cols/map.o \
	goo/mag.o \
	goo/cols/seq.o \
	goo/packer.o \
	goo/cols/vec.o \
	goo/types.o \
	eval/g2c.o \
	goo/cols/cycle.o \
	goo/late-macros.o \
	goo/io/port.o \
	goo/cols/lst.o \
	goo/cols/col.o \
	goo/cols/seqx.o \
	goo/cols/zip.o \
	goo/cols/str.o \
	goo/conditions.o \
	goo/cols/tab.o \
	goo/cols/colx.o \
	eval/ast-linearize.o \
	eval/ast.o \
	eval/syntax.o \
	goo/runtime.o \
	goo/eval.o \
	goo/cols/range.o \
	goo/cols/opts.o \
	time/lock.o \
	time/%lock.o \
	goo/macros.o \
	goo/cols/flat.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
