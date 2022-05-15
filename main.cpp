/*
 * 顺序表
 */

#include "Header_file.h"

void textStaticSqlist(){//静态分配测试
    SqList L;
    InitList(L);
    for(int i=0;i<L.length;i++)
        printf("data[%d]=%d\n",i,L.data[i]);
    ListInsert(L,3,3);
    for(int i=0;i<L.length;i++)
        printf("data[%d]=%d\n",i,L.data[i]);
    int e=-1;
    if (ListDelete(L,3,e))
        printf("%d\n",e);
    else
        printf("");
    for(int i=0;i<L.length;i++)
        printf("data[%d]=%d\n",i,L.data[i]);
}

void textDynamicSeqlist(){//动态分配测试
    SeqList L;
    InitList(L);
    IncreaseSize(L,5);
}

int main(){
    textStaticSqlist();
    //textDynamicSeqlist();
    return 0;
}