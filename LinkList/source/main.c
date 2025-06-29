#include <stdio.h>
#include "../header/LinkList.h"

int main()
{
    int pos = 9;
    Data val = 99;
    
    Node* list = createList();
     for(int i = 0;i<7;i++)
    {
        insert_head(list,i);              
    }
    show_list(list);
    // putchar('\n');
    // for(int i = 7;i<12;i++)
    // {       
    //     insert_tail(list,i);
    // }

    // insert_pos(list,pos,val);

    Node* element = findNode(list,6);
    insert_element(list,element,99);
    show_list(list);
   
    return 0;
}