all: 
	(cd g2c; $(MAKE))

# Create installation
install: all
	cp g2c/g2c ../BIN/g2c

clean:
	rm -f grt.o unexelf.o
	(cd g2c; $(MAKE) clean)

.PHONY: all install clean

