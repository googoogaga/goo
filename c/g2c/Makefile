C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/cols/cycle.o \
	goo/cols/range.o \
	time/threads.o \
	time/%threads.o \
	goo/cols/map.o \
	goo.o \
	eval/dependency.o \
	goo/cols/seq.o \
	goo/cols/col.o \
	goo/cols/tab.o \
	goo/cols/rep.o \
	eval/top.o \
	time/event.o \
	time/%event.o \
	goo/cols/zip.o \
	goo/cols/flat.o \
	goo/cols/str.o \
	eval/ast.o \
	goo/cols/lst.o \
	goo/math.o \
	goo/cols/step.o \
	goo/app.o \
	goo/conditions.o \
	goo/mag.o \
	goo/cols/vec.o \
	goo/io/read.o \
	goo/user.o \
	goo/io/write.o \
	goo/cols/colx.o \
	goo/random.o \
	goo/cols/opts.o \
	eval/main.o \
	goo/macros.o \
	goo/types.o \
	eval/ast-linearize.o \
	goo/runtime.o \
	goo/cols.o \
	goo/eval.o \
	goo/io/port.o \
	goo/system.o \
	goo/cols/seqx.o \
	goo/packer.o \
	cols/pipe.o \
	eval/syntax.o \
	eval/ast-eval.o \
	eval/g2c.o \
	goo/boot.o \
	goo/cols/tup.o \
	time/lock.o \
	time/%lock.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
