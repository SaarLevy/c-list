#include <stdio.h>
#include <stdlib.h>
#include "int_list.h"


int main() {

    int_list *list = create_list(3);
    print_list(list);

    return 0;

}