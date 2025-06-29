#include <stdio.h>
#include "../header/LinkList.h"

int main()
{
    Node* list = createList();
    for(int i = 0;i<3;i++)
    {
        insert_head(list,i);
    }
    show_list(list);
    return 0;
}