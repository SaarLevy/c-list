#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "int_list.h"

//Creates an int_list with the size of "initial_size" with all elements equal to 0
int_list *create_list(int initial_size) {

    int_list *list = malloc(sizeof(int_list));
    list->elements = calloc(initial_size, sizeof(int));
    list->length = initial_size;
    return list;
}

void insert_to_list(int_list *list, int index, int value) {
    list->length++;
    list = realloc(list, sizeof(int_list));
    // list->elements = realloc(list, sizeof(int)*list->length); Why is this not needed?????

    for(int i=list->length; i>index; i--) {
        list->elements[i] = list->elements[i-1];
    }
    list->elements[index] = value;

}

//Adds an element at the end of *list with the value of value
void append_to_list(int_list *list, int value) {
    insert_to_list(list, list->length, value);
}

//Sets an element in *list[index] to a specific value
void set_list_item(int_list *list, int index, int value) {
    list->elements[index] = value;
}

//Prints list in format of [<element1>, <element2>, <element3>...]
void print_list(int_list *list) {
    printf("Length: %d\n", list->length);
    printf("Elements: [");
    for (int i=0; i < list->length; i++) {
        if (i == list->length-1) printf("%d]\n\n", list->elements[i]);
        else printf("%d, ", list->elements[i]);
    }
}