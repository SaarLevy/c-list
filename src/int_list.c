#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "int_list.h"

//Creates an int_list with the size of "initial_size" with all elements equal to 0
int_list *list_create(int initial_size) {

    int_list *list = malloc(sizeof(int_list));
    list->elements = calloc(initial_size, sizeof(int));
    list->length = initial_size;
    return list;
}

//Inserts an element in *list at int index equals to int value
void list_insert(int_list *list, int index, int value) {
    list->length++;
    list = realloc(list, sizeof(int_list));
    // list->elements = realloc(list, sizeof(int)*list->length); Why is this not needed?????

    for(int i=list->length; i>index; i--) {
        list->elements[i] = list->elements[i-1];
    }
    list->elements[index] = value;

}

//Adds an element at the end of *list with the value of value
void list_append(int_list *list, int value) {
    list_insert(list, list->length, value);
}

//Sets an element in *list[index] to a specific value
void list_set_element(int_list *list, int index, int value) {
    list->elements[index] = value;
}

void remove_element_from_list(int_list *list, int index) {

}

//Prints list in format of [<element1>, <element2>, <element3>...]
void list_print(int_list *list) {
    printf("Length: %d\n", list->length);
    printf("Elements: [");
    for (int i=0; i < list->length; i++) {
        if (i == list->length-1) printf("%d]\n\n", list->elements[i]);
        else printf("%d, ", list->elements[i]);
    }
}