#include <stdio.h>
#include "int_list.h"

int main() {

    int_list *my_list = create_list(5);
    print_list(my_list);

    return 0;
}