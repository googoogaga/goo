all: 
	(cd p2c; $(MAKE))

# Create installation
install: all
	cp p2c/p2c ../BIN/p2c

clean:
	rm -f prt.o unexelf.o
	(cd p2c; $(MAKE) clean)

.PHONY: all install clean

