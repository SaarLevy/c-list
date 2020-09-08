OBJS	= main.o int_list.o
SOURCE	= main.c int_list.c
HEADER	= int_list.h
OUT	= prog.out
CC 	= gcc
FLAGS	 = -g3 -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

int_list.o: int_list.c
	$(CC) $(FLAGS) int_list.c 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)

rc:
	make run && make clean

debug: $(OUT)
	valgrind $(OUT)

valgrind: $(OUT)
	valgrind $(OUT)

valgrind_leakcheck: $(OUT)
	valgrind --leak-check=full $(OUT)

valgrind_extreme: $(OUT)
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes $(OUT)

