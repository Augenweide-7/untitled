#include<stdio.h>
#include<stdlib.h>

#define MAX 100
typedef int ElemType;
typedef struct {
    ElemType elem[MAX];
    int length;
} SeqList;

SeqList *CreatSqlist();

void mergeSqlist1(SeqList *A, SeqList *B, SeqList *C);//递增、递增、递增

void mergeSqlist2(SeqList *A, SeqList *B, SeqList *C);//递增、递增、递减

void DisplaySqlist(SeqList *A);

int main() {
    SeqList *A, *B;
    A = CreatSqlist();
    B = CreatSqlist();
    SeqList *C = (SeqList *) malloc(sizeof(SeqList));
    mergeSqlist2(A, B, C);
    DisplaySqlist(C);
    return 0;
}

SeqList *CreatSqlist() {
    SeqList *sq = (SeqList *) malloc(sizeof(SeqList));
    scanf("%d", &sq->length);
    for (int i = 0; i < sq->length; i++) {
        scanf("%d", &sq->elem[i]);
    }
    return sq;
}

void mergeSqlist1(SeqList *A, SeqList *B, SeqList *C) {
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < A->length && j < B->length) {
        if (A->elem[i] <= B->elem[j])
            C->elem[k++] = A->elem[i++];
        else
            C->elem[k++] = B->elem[j++];
    }
    while (i < A->length)
        C->elem[k++] = A->elem[i++];
    while (j < B->length)
        C->elem[k++] = B->elem[j++];
    C->length = A->length + B->length;
}

void mergeSqlist2(SeqList *A, SeqList *B, SeqList *C) {
    int i, j, k;
    i = A->length-1;
    j = B->length-1;
    k = 0;
    while (i >= 0 && j >= 0) {
        if (A->elem[i] >= B->elem[j])
            C->elem[k++] = A->elem[i--];
        else
            C->elem[k++] = B->elem[j--];
    }
    while (i >= 0)
        C->elem[k++] = A->elem[i--];
    while (j >= 0)
        C->elem[k++] = B->elem[j--];
    C->length = A->length + B->length;
}

void DisplaySqlist(SeqList *sq) {
    for (int i = 0; i < sq->length; i++) {
        printf("%d ", sq->elem[i]);
    }
}
