typedef struct {
    int *elements;
    int length;

} int_list;

int_list *list_create(int initial_size);
void list_insert(int_list *list, int index, int value);
void list_append(int_list *list, int value);
void list_set_element(int_list *list, int index, int value);
void list_remove_element(int_list *list, int index);
void list_print(int_list *list);