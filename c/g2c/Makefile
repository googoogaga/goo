C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/io/port.o \
	eval/ast-eval.o \
	goo/cols/vec.o \
	eval/top.o \
	goo/eval.o \
	cols/pipe.o \
	goo/boot.o \
	goo/random.o \
	goo/cols/col.o \
	goo/cols/seqx.o \
	goo/cols/seq.o \
	goo/user.o \
	goo/cols/lst.o \
	goo/cols/str.o \
	goo/mag.o \
	goo/cols/flat.o \
	goo/packer.o \
	goo/app.o \
	eval/syntax.o \
	eval/main.o \
	goo/cols/range.o \
	eval/g2c.o \
	goo/cols/rep.o \
	goo/cols/tup.o \
	eval/dependency.o \
	goo/cols/zip.o \
	eval/ast.o \
	goo/cols/tab.o \
	goo/io/write.o \
	goo/macros.o \
	goo/cols/cycle.o \
	goo/cols/opts.o \
	time/lock.o \
	time/%lock.o \
	time/event.o \
	time/%event.o \
	goo/cols/map.o \
	goo/io/read.o \
	eval/ast-linearize.o \
	goo/cols/colx.o \
	goo/cols.o \
	goo.o \
	goo/system.o \
	goo/types.o \
	goo/runtime.o \
	time/threads.o \
	time/%threads.o \
	goo/cols/step.o \
	goo/math.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
