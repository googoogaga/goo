C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. $(CFLAGS) -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c -o $@ $<

OBJS = \
	goo/cols/vec.o \
	goo/cols/col.o \
	eval/dependency.o \
	eval/top.o \
	goo/cols/zip.o \
	goo/system.o \
	time/lock.o \
	time/%lock.o \
	goo/macros.o \
	goo/cols/opts.o \
	goo/io/write.o \
	cols/pipe.o \
	goo/packer.o \
	eval/ast.o \
	eval/syntax.o \
	goo/random.o \
	goo/cols/seqx.o \
	goo.o \
	goo/late-macros.o \
	goo/cols/step.o \
	goo/cols/cycle.o \
	goo/mag.o \
	goo/cols/range.o \
	goo/app.o \
	goo/cols/tup.o \
	goo/conditions.o \
	goo/io/read.o \
	goo/cols/str.o \
	eval/main.o \
	eval/ast-linearize.o \
	goo/math.o \
	goo/types.o \
	goo/eval.o \
	goo/cols.o \
	eval/g2c.o \
	goo/user.o \
	goo/cols/rep.o \
	time/threads.o \
	time/%threads.o \
	goo/cols/seq.o \
	goo/runtime.o \
	goo/cols/lst.o \
	time/event.o \
	time/%event.o \
	goo/cols/flat.o \
	goo/cols/tab.o \
	goo/boot.o \
	goo/io/port.o \
	eval/ast-eval.o \
	goo/cols/map.o \
	goo/cols/colx.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LDFLAGS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
