typedef struct int_list{
    int *elements;
    int length;

} int_list;

int_list *create_list(int initial_size);
void insert_item_to_list(int_list *list, int index, int value);
void append_to_list(int_list *list, int value);
void set_list_item(int_list *list, int index, int value);
void print_list(int_list *list);