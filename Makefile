include ./Make.inc

install:
	cd c; cp Make.inc.linux Make.inc; $(MAKE)
	install -d $(GOO_BIN)
	cp -p c/g2c/g2c $(GOO_BIN)/goo
	install -d $(GOO_LIB)
	cp c/grt.h $(GOO_LIB)/
	cp c/dlgrt.h $(GOO_LIB)/
	install -d $(GOO_MODS)
	cp -r src/* $(GOO_MODS)/
	install -d $(GOO_DOC)
	cp doc/goo.pdf $(GOO_DOC)/

simple-install:
	DEFAULT_GOO_ROOT = \"`pwd`\"
	cd c; $(MAKE)
	install -d $(GOO_BIN)
	cp -p c/g2c/g2c $(GOO_BIN)/goo
	ln -s c lib	
	ln -s src mods
