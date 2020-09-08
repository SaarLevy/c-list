#include <stdio.h>
#include <stdlib.h>

#include "arraylist.h"


int main() {

    arraylist *list = arraylist_create(10);
    for(int i=0; i < list->length; i++) {
        arraylist_set_element(list, i, (void *)i);
        printf("%d ", i);
    }
    printf("\n");
    arraylist_print(list);

    arraylist_append(list, (void*) 2000234);
    arraylist_insert(list, 4, (void *) 53242);
    arraylist_print(list);

    arraylist_remove_element(list, 2);
    arraylist_print(list);

    return 0;
}