C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	eval/ast.o \
	goo/cols/vec.o \
	time/threads.o \
	time/%threads.o \
	goo/cols/opts.o \
	goo/cols/rep.o \
	goo/system.o \
	goo/conditions.o \
	goo/cols/map.o \
	goo/boot.o \
	goo/cols.o \
	time/event.o \
	time/%event.o \
	eval/ast-linearize.o \
	goo/user.o \
	goo/cols/flat.o \
	goo/runtime.o \
	goo/random.o \
	goo/cols/cycle.o \
	eval/main.o \
	goo/io/port.o \
	eval/dependency.o \
	goo/cols/tup.o \
	goo/cols/col.o \
	goo/io/write.o \
	goo/cols/step.o \
	goo/cols/str.o \
	goo.o \
	goo/mag.o \
	goo/eval.o \
	goo/types.o \
	time/lock.o \
	time/%lock.o \
	goo/cols/range.o \
	goo/io/read.o \
	goo/cols/seqx.o \
	goo/math.o \
	eval/syntax.o \
	goo/cols/tab.o \
	eval/ast-eval.o \
	cols/pipe.o \
	eval/g2c.o \
	goo/packer.o \
	goo/cols/seq.o \
	eval/top.o \
	goo/app.o \
	goo/cols/lst.o \
	goo/cols/colx.o \
	goo/cols/zip.o \
	goo/macros.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
