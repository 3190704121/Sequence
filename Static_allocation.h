//
// Created by zwp18 on 2022/5/15.
//

#ifndef SEQUENCE_STATIC_ALLOCATION_H
#define SEQUENCE_STATIC_ALLOCATION_H

#define MaxSize 10
typedef struct {
    int data[MaxSize];
    int length;
}SqList;

void InitList(SqList &L);
bool  ListInsert(SqList &L,int i,int e);
bool  ListDelete(SqList &L,int i,int &e);
int GetElem(SqList L,int i);

#endif //SEQUENCE_STATIC_ALLOCATION_H
