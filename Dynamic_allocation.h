//
// Created by zwp18 on 2022/5/15.
//

#ifndef SEQUENCE_DYNAMIC_ALLOCATION_H
#define SEQUENCE_DYNAMIC_ALLOCATION_H

#define InitSize 10

typedef struct {
    int *data;
    int Maxsize;
    int length;
}SeqList;

void InitList(SeqList &L);
void IncreaseSize(SeqList &L,int len);
int GetElem(SeqList L,int i);
int LocateElem(SeqList L,int e);

#endif //SEQUENCE_DYNAMIC_ALLOCATION_H
