include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	$(CC) -I.. -c -g -o $@ $<

OBJS = \
	proto/collections.o \
	proto/magnitudes.o \
	proto/collections/opts.o \
	top.o \
	proto/collections/list.o \
	proto/collections/map.o \
	syntax.o \
	proto/eval.o \
	ast-linearize.o \
	boot.o \
	main.o \
	proto/user.o \
	write.o \
	proto/math.o \
	proto/collections/assoc.o \
	runtime1.o \
	proto/collections/buffer.o \
	proto.o \
	proto/collections/flat.o \
	proto/collections/table.o \
	ast.o \
	dependency.o \
	p2c.o \
	read.o \
	proto/collections/string.o \
	proto/collections/collection.o \
	proto/collections/range.o \
	ast-eval.o \
	proto/collections/vector.o \
	proto/system.o \
	macros.o \
	strings.o \
	proto/collections/sequence.o \
	runtime.o \
	proto/ports.o \
	proto/types.o \
	proto/collections/step.o \
	p2c-init.o

p2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o p2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f p2c $(OBJS)
