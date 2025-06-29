
#include <stdio.h>
#include "../header/LinkList.h"
#include <malloc.h>
#include <string.h>

// 创建链表，也就是先创建一个头节点
Node* createList()
{
    Node* head = (Node*)malloc(sizeof(Node));
    if(!head)
    {
        printf("head malloc failed!\n");
        return NULL;
    }
    // 初始化头节点，避免节点元素过多初始化不方便，可使用memset()
    // head->data = 0;
    // head->next = NULL;
    memset(head,0,sizeof(Node));
    return head;
}

// 创建节点,此处没有在头文件声明
Node* createNode(Data val)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(!newNode)
    {
        printf("newNode create failed!/n");
        return NULL;
    }
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}


// 头插入,画图
void insert_head(Node* list,Data val)
{
    Node* newNode = createNode(val);
    newNode->next = list->next;
    list->next = newNode;
}
// 尾插入
void insert_tail(Node* list,Data val)
{
    Node* tempNode = list;  //list传入的时候就是头节点，用头节点代表链表
    // Node* tempNode = createNode(0);
    // tempNode = list;

    while(tempNode->next)
    {
        tempNode = tempNode->next;
    }
    Node* newNode = createNode(val);
    tempNode->next = newNode;
    // newNode->next = NULL;此步多余，创建节点的时候已经指向空
}
// 指定下标位置插入
void insert_pos(Node* list,int pos,Data val)
{
    Node* newNode = createNode(val);
    Node* tempNode = list;
    for(int i = 1;i < pos && tempNode;i++)
    {
        tempNode = tempNode->next;
    }
    // 插入的时候，tempNode在插入位置的前面
    newNode->next = tempNode->next;
    tempNode->next = newNode;
}
// 指定元素(节点)位置插入（在指定元素之后）
void insert_element(Node* list,Node* element,Data val)
{
    Node* newNode = createNode(val);
    
    newNode->next = element->next;
    element->next = newNode;
}
// 依据val查找节点
Node* findNode(Node* list,Data val)
{
    Node* tempNode = list->next;
    while(tempNode)
    {        
        if(tempNode->data == val)
        {
            return tempNode;
        }        
        tempNode = tempNode->next;
    }
    return NULL;
}
// 从头到尾显示链表
void show_list(Node* list)
{
    Node* tempNode = list;
    while(tempNode->next)
    {
        tempNode = tempNode->next;
        printf("%d ",tempNode->data);
    }
    printf("\n");
}

