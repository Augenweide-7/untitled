//
// Created by augenweide on 2022/3/8.
//
#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100
typedef int ElemType;
typedef struct {
    ElemType elem[MAXSIZE];
    int length;
} SeqList;

SeqList *CreatList();

void PrintList(SeqList *q);

void reverse(SeqList *q);

int main() {
    SeqList *q;
    q = CreatList();
    reverse(q);
    PrintList(q);
    return 0;
}

SeqList *CreatList() {
    SeqList *sq = (SeqList *) malloc(sizeof(SeqList));
    scanf("%d", &(sq->length));
    for (int i = 0; i < sq->length; i++) {
        scanf("%d", &(sq->elem[i]));
    }
    return sq;
}

void PrintList(SeqList *sq) {
    for (int i = 0; i < sq->length; i++)
        printf("%d ", sq->elem[i]);
}

void reverse(SeqList *q) {
    int i = 0, j = q->length - 1;
    ElemType temp;
    while (i < j) {
        temp = q->elem[i];
        q->elem[i] = q->elem[j];
        q->elem[j] = temp;
        i++;
        j--;
    }
}

