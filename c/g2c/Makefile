C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/cols/zip.o \
	goo/packer.o \
	goo/io/write.o \
	goo/macros.o \
	goo/late-macros.o \
	time/event.o \
	time/%event.o \
	eval/top.o \
	goo/math.o \
	goo/cols/range.o \
	goo/boot.o \
	goo/runtime.o \
	goo/cols/rep.o \
	eval/g2c.o \
	goo/cols/cycle.o \
	goo/cols/step.o \
	goo/cols/str.o \
	goo/random.o \
	eval/ast-linearize.o \
	goo/cols/map.o \
	goo/cols/tup.o \
	goo/mag.o \
	goo/user.o \
	goo/types.o \
	goo/cols.o \
	goo/cols/seq.o \
	goo/cols/seqx.o \
	goo/cols/col.o \
	goo/system.o \
	goo/cols/tab.o \
	goo/cols/lst.o \
	eval/ast.o \
	goo/cols/opts.o \
	time/lock.o \
	time/%lock.o \
	goo/cols/vec.o \
	eval/syntax.o \
	cols/pipe.o \
	goo/eval.o \
	eval/main.o \
	goo/cols/colx.o \
	goo/cols/flat.o \
	goo/io/read.o \
	goo/conditions.o \
	time/threads.o \
	time/%threads.o \
	eval/dependency.o \
	goo.o \
	eval/ast-eval.o \
	goo/io/port.o \
	goo/app.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
