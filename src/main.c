#include <stdio.h>
#include <stdlib.h>

#include "arraylist.h"


int main() {

    arraylist *list = list_create(10);
    for(int i=0; i < list->length; i++) {
        list->elements[i] =i;
    }
    list_print(list);

    list_append(list, 50);
    list_print(list);

    list_remove_element(list, list->length-1);
    list_print(list);

    list_remove_element(list, 4);
    list_print(list);

    return 0;
}