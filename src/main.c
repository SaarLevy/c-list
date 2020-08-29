#include <stdio.h>
#include <stdlib.h>

#include "int_list.h"


int main() {

    int_list *list = list_create(10);
    for(int i=0; i < list->length; i++) {
        list->elements[i] = rand() % 10 + 1;
    }
    list_print(list);

    list_remove_element(list, 4);
    list_print(list);

    return 0;
}