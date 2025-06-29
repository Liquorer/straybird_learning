#ifndef _SEQLIST_H_
#define _SEQLIST_H_

//抽象数据类型
typedef int Data;

typedef struct SeqList
{
    Data *arr;
    int capacity;
    int size;    //有效元素的个数
}SeqList;

SeqList* CreateSeqList();

#endif