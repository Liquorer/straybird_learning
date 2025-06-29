#include "SqeList.h"
#include <stdio.h>
#include <malloc.h>

SeqList* createSeqList()
{
    SeqList* list = calloc(1,sizeof(SeqList));
    if (!list)
    {
        printf("list create failed\n");
        return NULL;
    }
    list->capacity=SEQLIST_INIT_SIZE;
    list->size = 0;
    list->arr = calloc(list->capacity,sizeof(Data));
    if(!llist->arr)
    {
        printf("list->arr create failed\n");
        free(list);
        return NULL;
    }

    return list;
}