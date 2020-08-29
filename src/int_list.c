#include <stdio.h>
#include <stdlib.h>

#include "int_list.h"

//Creates an int_list with the size of "initial_size" with all elements equal to 0
int_list *create_list(int initial_size) {

    int_list *l = malloc(sizeof(int_list));
    l->elements = calloc(initial_size, sizeof(int));
    l->length = initial_size;
    return l;
    
}

void insert_item_to_list(int_list *list, int index, int value) {
    list = list;
}

//Adds an element at the end of *list with the value of value
void append_to_list(int_list *list, int value) {
    list = realloc(list, sizeof(int)*list->length+1);
    list->length += 1;
    list->elements[list->length-1] = value;
}

//Sets an element in *list[index] to a specific value
void set_list_item(int_list *list, int index, int value) {
    list->elements[index] = value;
}

//Prints list in format of [<item1>, <item2>, <item3>...]
void print_list(int_list *list) {
    printf("Length: %d\n", list->length);
    printf("Elements: [");
    for (int i=0; i < list->length; i++) {
        if (i == list->length-1) printf("%d]\n", list->elements[i]);
        else printf("%d, ", list->elements[i]);
    }
}