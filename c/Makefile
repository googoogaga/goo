COMPILER = gcc
COPTIONS = -g -O
SRC_DIR  = C:/jrb/ai/proto/C

# OBJECTS = $(SRC_DIR)/proto.obj

all:  proto.exe

proto.exe: proto.obj
	gcc $(COPTIONS) -o proto.exe proto.obj gc.a

proto.obj: proto.h proto.c
	gcc -c $(COPTIONS) -o proto.obj proto.c

# Remove all class files from the project directory. 
clean: 
	rm *.obj proto.exe

# Create installation
install: 
	cp proto.exe ../BIN/proto.exe

