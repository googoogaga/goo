include ../Make.inc
C_OBJS_DD = $(patsubst %,../%,$(C_OBJS))
.c.o: ../prt.h
	$(CC) -I.. -c -g -O -o $@ $<

OBJS = \
	proto/collections/collection.o \
	macros.o \
	proto/collections/sequence.o \
	proto/collections/buffer.o \
	proto/collections/range.o \
	read.o \
	proto/collections/table.o \
	boot.o \
	proto/collections/opts.o \
	write.o \
	proto/ports.o \
	proto/system.o \
	proto/collections/string.o \
	runtime.o \
	proto/collections/step.o \
	proto/magnitudes.o \
	proto/collections/map.o \
	ast-linearize.o \
	ast.o \
	proto/user.o \
	proto/collections/list.o \
	proto/types.o \
	proto/collections/vector.o \
	proto/collections/zip.o \
	runtime1.o \
	syntax.o \
	proto/eval.o \
	proto/collections/cycle.o \
	ast-eval.o \
	top.o \
	strings.o \
	proto/accumulators.o \
	main.o \
	proto/collections/flat.o \
	proto/collections/assoc.o \
	proto.o \
	proto/math.o \
	p2c.o \
	proto/collections.o \
	dependency.o \
	g2c-init.o

g2c: $(C_OBJS_DD) $(OBJS)
	$(CC) -Wl,--export-dynamic -o g2c $(C_OBJS_DD) $(LIBS) $(OBJS)

clean:
	rm -f g2c $(OBJS)
