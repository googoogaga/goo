include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	syntax.o \
	proto/system.o \
	proto/math.o \
	read.o \
	proto/collections/collection.o \
	main.o \
	macros.o \
	proto/collections/buffer.o \
	ast.o \
	runtime.o \
	proto/collections/table.o \
	proto/collections/vector.o \
	proto/collections/range.o \
	strings.o \
	proto/collections/map.o \
	proto/collections/flat.o \
	proto.o \
	proto/collections/string.o \
	proto/user.o \
	proto/collections/opts.o \
	p2c.o \
	boot.o \
	ast-eval.o \
	ast-linearize.o \
	proto/collections.o \
	top.o \
	proto/collections/step.o \
	proto/collections/assoc.o \
	proto/ports.o \
	runtime1.o \
	proto/types.o \
	proto/eval.o \
	write.o \
	proto/collections/list.o \
	proto/collections/sequence.o \
	p2c-init.o

p2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o p2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f p2c $(OBJS)
