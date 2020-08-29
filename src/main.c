#include <stdio.h>
#include "int_list.h"


int main() {

    int_list *list = list_create(10);
    for(int i=0; i < list->length; i++) {
        list->elements[i] = i;
    }
    list_print(list);

    list_insert(list, 4, 16);
    list_print(list);
    list_append(list, 39);
    list_print(list);

    return 0;

}