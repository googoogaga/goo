include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/system.o \
	goo/io/read.o \
	goo/collections/strings.o \
	goo/collections.o \
	goo/collections/zip.o \
	goo/io/write.o \
	compiler/top.o \
	goo/collections/flat.o \
	goo/collections/buffer.o \
	goo/collections/map.o \
	compiler/ast-linearize.o \
	goo/math.o \
	compiler/ast-eval.o \
	goo/accumulator.o \
	goo.o \
	goo/collections/sequence.o \
	compiler/syntax.o \
	goo/collections/string.o \
	goo/macros.o \
	goo/collections/assoc.o \
	goo/collections/vector.o \
	goo/collections/range.o \
	goo/types.o \
	runtime/boot.o \
	goo/collections/cycle.o \
	goo/collections/table.o \
	runtime/runtime.o \
	runtime/apply.o \
	goo/collections/opts.o \
	compiler/main.o \
	goo/collections/step.o \
	goo/collections/list.o \
	goo/eval.o \
	compiler/g2c.o \
	compiler/dependency.o \
	goo/magnitude.o \
	compiler/ast.o \
	goo/io/port.o \
	goo/collections/collection.o \
	goo/user.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
