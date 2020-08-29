#include <stdio.h>
#include <stdlib.h>

#include "int_list.h"


typedef struct int_list{
    int *items;
    int length;

} int_list;


//Creates an int_list with the size of "initial_size" with all elements equal to 0
int_list *create_list(int initial_size) {

    int_list *l = malloc(sizeof(int_list));
    l->items = calloc(initial_size, sizeof(int));
    l->length = initial_size;
    return l;
    
}


void print_list(int_list *list) {
    printf("[");
    for (int i=0; i < list->length; i++) {
        if (i == list->length-1) printf("%d]\n", list->items[i]);
        else printf("%d, ", list->items[i]);
       
    }
}