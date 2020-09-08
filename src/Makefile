OBJS	= main.o arraylist.o
SOURCE	= main.c arraylist.c
HEADER	= arraylist.h
OUT	= program.out
CC 	= gcc
FLAGS	 = -g3 -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

arraylist.o: arraylist.c
	$(CC) $(FLAGS) arraylist.c 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)

rc:
	make run && make clean

debug: $(OUT)
	gdb $(OUT)

valgrind: $(OUT)
	valgrind $(OUT)

valgrind_leakcheck: $(OUT)
	valgrind --leak-check=full $(OUT)

valgrind_extreme: $(OUT)
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes $(OUT)

