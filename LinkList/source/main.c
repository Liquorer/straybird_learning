#include <stdio.h>
#include "../header/LinkList.h"

int main()
{
    Node* list = createList();
     for(int i = 0;i<7;i++)
    {
        insert_head(list,i);              
    }
    show_list(list);

    for(int i = 7;i<12;i++)
    {       
        insert_tail(list,i);
    }
    show_list(list);
    
   printf("!!!!");
    return 0;
}