include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../grt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	compiler/ast-eval.o \
	goo/math.o \
	runtime/runtime.o \
	goo/collections/buffer.o \
	goo/collections/vector.o \
	goo/collections/table.o \
	goo/macros.o \
	compiler/dependency.o \
	goo/collections/map.o \
	goo/collections/flat.o \
	goo/collections/list.o \
	goo/eval.o \
	goo/collections/step.o \
	goo/user.o \
	goo/magnitude.o \
	compiler/main.o \
	runtime/boot.o \
	goo/collections/zip.o \
	goo/io/write.o \
	compiler/ast-linearize.o \
	compiler/top.o \
	compiler/syntax.o \
	compiler/ast.o \
	goo/collections.o \
	goo/types.o \
	goo/collections/cycle.o \
	goo/collections/collection.o \
	goo/collections/string.o \
	goo/io/read.o \
	goo/accumulator.o \
	goo/collections/sequence.o \
	runtime/apply.o \
	goo.o \
	goo/collections/optionals.o \
	goo/io/port.o \
	compiler/g2c.o \
	goo/collections/range.o \
	goo/system.o \
	goo/collections/assoc.o \
	goo/collections/strings.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
