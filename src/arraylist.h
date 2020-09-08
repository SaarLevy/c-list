typedef struct {
    void **elements;
    int length;

} arraylist;

arraylist *arraylist_create(int initial_size);
void arraylist_insert(arraylist *list, int index, void *value);
void arraylist_append(arraylist *list, void *value);
void arraylist_set_element(arraylist *list, int index, void *value);
void arraylist_remove_element(arraylist *list, int index);
void arraylist_print(arraylist *list);