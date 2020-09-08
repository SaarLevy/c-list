typedef struct {
    int *elements;
    int length;

} arraylist;

arraylist *list_create(int initial_size);
void list_insert(arraylist *list, int index, int value);
void list_append(arraylist *list, int value);
void list_set_element(arraylist *list, int index, int value);
void list_remove_element(arraylist *list, int index);
void list_print(arraylist *list);