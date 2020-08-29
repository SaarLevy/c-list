#include <stdio.h>
#include "int_list.h"


int main() {

    int length = 10;
    int_list *list = create_list(10);
    for(int i=0; i < list->length; i++) {
        list->elements[i] = i;
    }
    print_list(list);

    insert_to_list(list, 4, 16);
    print_list(list);
    append_to_list(list, 39);
    print_list(list);

    return 0;

}