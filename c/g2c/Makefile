C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -DDEFAULT_GOO_ROOT=\"$(GOO_ROOT)\" -c $(C_FLAGS) -o $@ $<

OBJS = \
	eval/main.o \
	eval/dependency.o \
	goo/cols/rep.o \
	eval/ast-linearize.o \
	goo/cols/str.o \
	eval/ast.o \
	goo/cols/colx.o \
	goo/math.o \
	eval/top.o \
	cols/pipe.o \
	goo/cols/range.o \
	goo/cols/col.o \
	goo/io/read.o \
	goo/cols/tup.o \
	goo/packer.o \
	goo/cols/cycle.o \
	goo/cols/lst.o \
	goo/cols/step.o \
	goo/cols/tab.o \
	goo/cols/opts.o \
	goo.o \
	goo/cols/vec.o \
	goo/cols/seq.o \
	eval/g2c.o \
	goo/mag.o \
	goo/random.o \
	goo/eval.o \
	goo/app.o \
	goo/cols.o \
	time/event.o \
	time/%event.o \
	goo/user.o \
	time/threads.o \
	time/%threads.o \
	goo/cols/zip.o \
	goo/system.o \
	goo/cols/map.o \
	goo/boot.o \
	goo/io/write.o \
	eval/syntax.o \
	goo/runtime.o \
	time/lock.o \
	time/%lock.o \
	goo/types.o \
	goo/macros.o \
	goo/io/port.o \
	goo/cols/seqx.o \
	goo/cols/flat.o \
	eval/ast-eval.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) $(LD_OPTS) -o g2c $(C_OBJS_DD) $(OBJS) $(LIBS)

clean:
	rm -f g2c $(OBJS)
