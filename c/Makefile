COMPILER = cc
COPTIONS = -g
SRC_DIR  = C:/jrb/ai/proto/C

# OBJECTS = $(SRC_DIR)/proto.obj

all:  proto.exe

proto.exe: prt.obj proto.obj
	$(COMPILER) $(COPTIONS) -o proto.exe prt.obj proto.obj gc.a

prt.obj: prt.h prt.c
	$(COMPILER) -c $(COPTIONS) -o prt.obj prt.c

proto.obj: prt.h proto.c
	$(COMPILER) -c $(COPTIONS) -o proto.obj proto.c

# Remove all class files from the project directory. 
clean: 
	rm *.obj proto.exe

# Create installation
install: 
	cp proto.exe ../BIN/proto.exe

