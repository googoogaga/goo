C_OBJS   = grt.o gc.a unexelf.o # midi.o threads.o timer.o 
LIBS     = -ldl -lm # -lncurses -lwinmm
LD_OPTS  = -Wl,--export-dynamic
