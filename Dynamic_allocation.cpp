//
// Created by zwp18 on 2022/5/15.
//

#include "Dynamic_allocation.h"
#include <stdio.h>
#include <stdlib.h>
#include "malloc.h"

void InitList(SeqList &L){
    L.data=(int*) malloc(InitSize*sizeof(int));
    L.length=0;
    L.Maxsize=InitSize;
}

void IncreaseSize(SeqList &L,int len){
    int *p=L.data;
    L.data=(int*) malloc((L.length+len)*sizeof(int));
    for (int i = 0; i < L.length; i++) {
        L.data[i]=p[i];
    }
    L.Maxsize=L.Maxsize+len;
    free(p);
}

int GetElem(SeqList L,int i){
    return  L.data[i-1];
}

int LocateElem(SeqList L,int e){
    for (int i = 0; i < L.length; i++) {
        if(L.data[i]==e)
            return i+1;
    }
    return 0;
}
