typedef struct int_list{
    int *items;
    int length;

} int_list;



int_list *create_list(int initial_size);
void append(int_list *list, int value);
void set_item(int_list *list, int index, int value);
void print_list(int_list *list);