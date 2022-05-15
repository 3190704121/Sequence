//
// Created by zwp18 on 2022/5/15.
//
/*
 * 静态分配
 */
#include "Static_allocation.h"
#include <stdio.h>
#include <stdlib.h>
#include "malloc.h"

void InitList(SqList &L){
    L.data[0]=1;
    L.data[1]=1;
    L.data[2]=1;
    L.data[3]=1;
    L.data[4]=1;
    L.length=5;
}

bool  ListInsert(SqList &L,int i,int e){
    if (i<1||i>L.length+1)
        return false;
    if (L.length>MaxSize)
        return false;
    for (int j = L.length; j>=i; j--) {
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;
    L.length++;
    return true;
}

bool  ListDelete(SqList &L,int i,int &e){
    if (i<1||i>L.length)
        return false;
    e=L.data[i-1];
    for (int j = i; j < L.length; j++) {
        L.data[j-1]=L.data[j];
    }
    L.length--;
    return true;
}

int GetElem(SqList L,int i){
    return L.data[i-1];
}
