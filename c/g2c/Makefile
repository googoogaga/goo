C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/cols/tup.o \
	eval/g2c.o \
	goo/cols/rep.o \
	goo/cols/seqx.o \
	goo/user.o \
	eval/ast.o \
	goo/io/port.o \
	goo/cols/step.o \
	cols/pipe.o \
	goo/cols/str.o \
	goo/cols/cycle.o \
	goo/eval.o \
	time/event.o \
	time/%event.o \
	goo/app.o \
	goo/cols/colx.o \
	goo.o \
	goo/random.o \
	goo/math.o \
	goo/macros.o \
	goo/cols/flat.o \
	eval/ast-linearize.o \
	goo/system.o \
	goo/runtime.o \
	goo/boot.o \
	goo/cols/vec.o \
	time/lock.o \
	time/%lock.o \
	goo/cols/tab.o \
	goo/cols/range.o \
	eval/dependency.o \
	goo/cols/opts.o \
	goo/types.o \
	eval/syntax.o \
	goo/mag.o \
	time/threads.o \
	time/%threads.o \
	eval/ast-eval.o \
	goo/cols/map.o \
	goo/cols/col.o \
	goo/io/write.o \
	eval/main.o \
	eval/top.o \
	goo/cols.o \
	goo/cols/zip.o \
	goo/cols/seq.o \
	goo/io/read.o \
	goo/cols/lst.o \
	goo/packer.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
