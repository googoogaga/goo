C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	eval/ast-linearize.o \
	goo/io/write.o \
	cols/pipe.o \
	goo/macros.o \
	goo/runtime.o \
	goo/cols/lst.o \
	goo/cols/flat.o \
	goo/cols/step.o \
	time/lock.o \
	time/%lock.o \
	goo/cols/str.o \
	goo/cols/seqx.o \
	eval/syntax.o \
	goo.o \
	goo/cols/colx.o \
	goo/cols/col.o \
	goo/cols/range.o \
	goo/cols/cycle.o \
	goo/math.o \
	goo/io/port.o \
	eval/ast-eval.o \
	time/threads.o \
	time/%threads.o \
	goo/io/read.o \
	goo/random.o \
	goo/system.o \
	eval/top.o \
	goo/cols/tup.o \
	goo/boot.o \
	goo/app.o \
	goo/cols/opts.o \
	goo/user.o \
	goo/cols/rep.o \
	goo/cols/tab.o \
	time/event.o \
	time/%event.o \
	goo/packer.o \
	goo/cols.o \
	goo/types.o \
	eval/main.o \
	goo/cols/zip.o \
	goo/cols/seq.o \
	eval/dependency.o \
	eval/g2c.o \
	goo/cols/map.o \
	goo/cols/vec.o \
	eval/ast.o \
	goo/eval.o \
	goo/mag.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
