/*****顺序表*****/
/*****静态分配*****/
//#include <stdio.h>
//#include <stdbool.h>
//#define MaxSize 10
//typedef struct {
//    int data[MaxSize];
//    int length;
//}SqList;
//
//void InitList(SqList &L){
//    L.data[0]=1;
//    L.data[1]=1;
//    L.data[2]=1;
//    L.data[3]=1;
//    L.data[4]=1;
//    L.length=5;
//}
//
//bool  ListInsert(SqList &L,int i,int e){
//    if (i<1||i>L.length+1)
//        return false;
//    if (L.length>MaxSize)
//        return false;
//    for (int j = L.length; j>=i; j--) {
//        L.data[j]=L.data[j-1];
//    }
//    L.data[i-1]=e;
//    L.length++;
//    return true;
//}
//
//bool  ListDelete(SqList &L,int i,int &e){
//    if (i<1||i>L.length)
//        return false;
//    e=L.data[i-1];
//    for (int j = i; j < L.length; j++) {
//        L.data[j-1]=L.data[j];
//    }
//    L.length--;
//    return true;
//}
//
//int GetElem(SqList L,int i){
//    return L.data[i-1];
//}
//
//int main(){
//    SqList L;
//    InitList(L);
//    for(int i=0;i<L.length;i++)
//        printf("data[%d]=%d\n",i,L.data[i]);
//    ListInsert(L,3,3);
//    for(int i=0;i<L.length;i++)
//        printf("data[%d]=%d\n",i,L.data[i]);
//   int e=-1;
//    if (ListDelete(L,3,e))
//        printf("%d\n",e);
//    else
//        printf("");
//    for(int i=0;i<L.length;i++)
//        printf("data[%d]=%d\n",i,L.data[i]);
//    return 0;
//}

/******动态分配*****/
#include <stdio.h>
#include <stdlib.h>

#define InitSize 10
typedef struct {
    int *data;
    int MaxSize;
    int length;
}SeqList;

void InitList(SeqList &L){
    L.data=(int*) malloc(InitSize*sizeof(int));
    L.length=0;
    L.MaxSize=InitSize;
}

void IncreaseSize(SeqList &L,int len){
    int *p=L.data;
    L.data=(int*) malloc((L.length+len)*sizeof(int));
    for (int i = 0; i < L.length; i++) {
        L.data[i]=p[i];
    }
    L.MaxSize=L.MaxSize+len;
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

int main(){
    SeqList L;
    InitList(L);
    IncreaseSize(L,5);
    return 0;
}