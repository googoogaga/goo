C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/io/port.o \
	goo/cols/vec.o \
	cols/pipe.o \
	eval/ast.o \
	goo/boot.o \
	goo/cols/col.o \
	goo/random.o \
	goo/cols/seqx.o \
	goo/cols/seq.o \
	goo/cols/lst.o \
	goo/cols/str.o \
	eval/ast-linearize.o \
	goo/mag.o \
	goo/user.o \
	goo/cols/flat.o \
	goo/packer.o \
	goo/app.o \
	eval/syntax.o \
	goo/eval.o \
	goo/cols/range.o \
	eval/main.o \
	goo/cols/rep.o \
	goo/cols/tup.o \
	eval/dependency.o \
	eval/top.o \
	goo/cols/zip.o \
	goo/cols/tab.o \
	goo/io/write.o \
	goo/macros.o \
	eval/g2c.o \
	goo/cols/cycle.o \
	goo/cols/opts.o \
	time/lock.o \
	time/%lock.o \
	eval/ast-eval.o \
	goo/cols/map.o \
	goo/io/read.o \
	goo/cols/colx.o \
	time/event.o \
	time/%event.o \
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
