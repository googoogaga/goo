include ./Make.inc

install: $(INSTALL)

real-install:
	cd c; $(MAKE)
	install -d $(GOO_BIN)
	cp -p c/g2c/g2c $(GOO_BIN)/goo
	install -d $(GOO_LIB)
	cp c/gc.h $(GOO_LIB)/
	cp c/grt.h $(GOO_LIB)/
	cp c/dlgrt.h $(GOO_LIB)/
	install -d $(GOO_MODS)
	cp -r src/* $(GOO_MODS)/
	install -d $(GOO_DOC)
	cp doc/goo.pdf $(GOO_DOC)/

PREFIX   = $(CURDIR)
GOO_ROOT = $(PREFIX)

simple-install:
	cd c; $(MAKE)
	install -d $(GOO_BIN)
	cp -p c/g2c/g2c$(EXE) $(GOO_BIN)/goo$(EXE)
	ln -s c lib	
	ln -s src mods

clean:
	cd c; $(MAKE) clean
	rm -f $(GOO_BIN)/goo$(EXE)
