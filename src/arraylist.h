typedef struct {
    int *elements;
    int length;

} arraylist;

arraylist *arraylist_create(int initial_size);
void arraylist_insert(arraylist *list, int index, int value);
void arraylist_append(arraylist *list, int value);
void arraylist_set_element(arraylist *list, int index, int value);
void arraylist_remove_element(arraylist *list, int index);
void arraylist_print(arraylist *list);