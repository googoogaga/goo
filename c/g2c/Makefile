include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	goo/collections/table.o \
	runtime/runtime.o \
	goo/collections/opts.o \
	goo/collections/map.o \
	goo/collections/collection.o \
	goo/collections.o \
	compiler/main.o \
	goo/collections/list.o \
	goo/collections/flat.o \
	compiler/dependency.o \
	goo/user.o \
	goo.o \
	goo/collections/strings.o \
	goo/macros.o \
	goo/math.o \
	goo/collections/vector.o \
	goo/collections/range.o \
	goo/type.o \
	compiler/top.o \
	goo/collections/step.o \
	compiler/syntax.o \
	goo/eval.o \
	goo/io/read.o \
	runtime/apply.o \
	goo/collections/string.o \
	goo/collections/buffer.o \
	goo/io/write.o \
	goo/port.o \
	compiler/ast.o \
	goo/collections/sequence.o \
	goo/magnitude.o \
	goo/collections/cycle.o \
	compiler/ast-eval.o \
	goo/accumulator.o \
	compiler/ast-linearize.o \
	compiler/p2c.o \
	goo/system.o \
	runtime/boot.o \
	goo/collections/zip.o \
	goo/collections/assoc.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
