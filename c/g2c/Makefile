C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/eval.o \
	goo/io/read.o \
	eval/dependency.o \
	goo/math.o \
	goo/cols.o \
	goo/random.o \
	goo/cols/seqx.o \
	eval/ast-eval.o \
	goo/user.o \
	cols/pipe.o \
	goo/packer.o \
	goo/cols/map.o \
	goo/cols/opts.o \
	goo/io/write.o \
	goo/app.o \
	goo/cols/cycle.o \
	goo/cols/step.o \
	eval/main.o \
	goo/cols/tup.o \
	eval/syntax.o \
	eval/ast-linearize.o \
	goo/macros.o \
	goo/cols/vec.o \
	goo/boot.o \
	goo/cols/tab.o \
	goo.o \
	eval/g2c.o \
	goo/runtime.o \
	goo/cols/seq.o \
	goo/cols/str.o \
	goo/mag.o \
	time/lock.o \
	time/%lock.o \
	goo/cols/flat.o \
	goo/cols/lst.o \
	goo/system.o \
	goo/types.o \
	goo/cols/range.o \
	goo/cols/rep.o \
	goo/cols/zip.o \
	time/threads.o \
	time/%threads.o \
	goo/io/port.o \
	eval/ast.o \
	eval/top.o \
	goo/cols/colx.o \
	goo/cols/col.o \
	time/event.o \
	time/%event.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
