#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arraylist.h"

//Creates an arraylist with the size of "initial_size" with all elements equal to 0
arraylist *arraylist_create(int initial_size) {
    arraylist *list = malloc(sizeof(arraylist));
    list->elements = calloc(initial_size, sizeof(void *));
    list->length = initial_size;
    return list;
}

//Helper macro to shift array elements
#define list_memshift(s, offset, length) memmove((s) + (offset), (s), (length)* sizeof(s));

//Inserts an element in *list at int index equals to int value
void arraylist_insert(arraylist *list, int index, void *value) {
    list->length++;
    list = realloc(list, sizeof(arraylist));
    //list->elements = realloc(list, sizeof(int)*list->length); //Why is this not needed?????

    list_memshift(list->elements + index, 1, list->length - index);
    list->elements[index] = value;

}

//Adds an element at the end of *list with the value of value
void arraylist_append(arraylist *list, void *value) {
    arraylist_insert(list, list->length, value);
}

//TODO: find a way to cast types at runtime
//Sets an element in *list[index] to a specific value
void arraylist_set_element(arraylist *list, int index, void *value) {
    list->elements[index] = value;
}

//Removes an element from list at a given index
//TODO: Is there a problem with memory here?
void arraylist_remove_element(arraylist *list, int index) {
    list_memshift(list->elements + index + 1, -1, list->length - index);
	list->length--;
}

//TODO: find a way to cast types at runtime in order to print all types, Right now casts everything into ints.
//Prints list in format of [<element1>, <element2>, <element3>...]
void arraylist_print(arraylist *list) {
    printf("Length: %d\n", list->length);
    printf("Elements: [");
    for (int i=0; i < list->length; i++) {
        if (i == list->length-1) printf("%d]\n\n", (int*)list->elements[i]);
        else printf("%d, ", (int*)list->elements[i]);
    }
}