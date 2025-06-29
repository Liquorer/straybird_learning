#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#define SEQLIST_INIT_SIZE 8     //顺序表初始大小

//抽象数据类型
typedef int Data;

typedef struct SeqList
{
    Data* arr;
    int capacity;
    int size;    //有效元素的个数
}SeqList;

SeqList* creatSeqList();

#endif