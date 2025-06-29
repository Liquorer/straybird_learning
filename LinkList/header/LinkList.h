#pragma once

//ADT 抽象数据类型
typedef int Data;

//定义节点数据类型
typedef struct Node
{
    Data data;
    struct Node* next;
}Node;

//创建链表
Node* createList();

// 头插入
void insert_head(Node* list,Data val);
// 尾插入
void insert_tail(Node* list,Data val);
// 指定下标位置插入
void insert_pos(Node* list,int pos,Data val);
// 指定元素(节点)位置插入（在指定元素之后）
void insert_element(Node* list,Node* element,Data val);

// 依据val查找节点
Node* findNode(Node* list,Data val);
// 显示节点
void show_list(Node* list);
