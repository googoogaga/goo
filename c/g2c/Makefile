C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/math.o \
	goo/io/port.o \
	goo/runtime.o \
	goo/cols/seqx.o \
	cols/pipe.o \
	goo/cols/col.o \
	eval/main.o \
	goo/random.o \
	goo/cols/zip.o \
	goo/macros.o \
	goo/io/read.o \
	goo/eval.o \
	eval/g2c.o \
	goo/types.o \
	goo/cols/flat.o \
	eval/ast.o \
	time/event.o \
	time/%event.o \
	eval/syntax.o \
	goo/cols/cycle.o \
	goo.o \
	goo/cols/str.o \
	goo/cols/range.o \
	goo/packer.o \
	goo/cols/tup.o \
	time/lock.o \
	time/%lock.o \
	goo/cols/rep.o \
	goo/cols/seq.o \
	goo/cols/opts.o \
	goo/cols.o \
	eval/dependency.o \
	goo/app.o \
	eval/ast-eval.o \
	time/threads.o \
	time/%threads.o \
	eval/ast-linearize.o \
	goo/mag.o \
	goo/cols/step.o \
	eval/top.o \
	goo/cols/tab.o \
	goo/boot.o \
	goo/cols/vec.o \
	goo/io/write.o \
	goo/cols/map.o \
	goo/system.o \
	goo/cols/colx.o \
	goo/user.o \
	goo/cols/lst.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
