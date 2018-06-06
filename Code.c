//
// Definition for singly-linked list:
// typedef struct list_##name {
//   type value;
//   struct list_##name *next;
// } list_##name;
//
// list_##name *alloc_list_##name(type v) {
//   list_##name *l = calloc(1, sizeof(list_##name));
//   l->value = v;
//   return l;
// }
//
//

void print_linked_list(list_integer * list){
    while(list){
        printf("%d ", list->value);
        list = list->next;
    }
}

list_integer * rearrangeLastN(list_integer * l, int n) {  
    list_integer * tmp = l;
    int count;
    
    if(l == NULL)
        return NULL;
    
    while(tmp != NULL){
        count++;
        if(tmp->next != NULL)
            tmp = tmp->next;
        else
            break;
    }
    
    if(n == 0 && count <= n && count == 0)
        return l;
    
    tmp->next = l;
    
    for(int i = 0; i < count - n; i++)
        tmp = tmp->next;
    
    l = tmp->next;
    tmp->next = NULL;
    
    return l;
}
