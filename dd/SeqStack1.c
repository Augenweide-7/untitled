#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

#define Stack_Size 50
typedef char ElemType;
typedef struct {
    ElemType data[Stack_Size];
    int top;
} SeqStack;

//栈的基本操作函数定义
SeqStack *InitStack();  //栈初始化
int IsEmpty(SeqStack *S); //栈判空
int IsFull(SeqStack *S);  //栈判满
int Push(SeqStack *S, ElemType x);  //  入栈
int Pop(SeqStack *S, ElemType *x);  //  出栈
int GetTop(SeqStack *S, ElemType *x); // 取栈顶元素


int IsPalindrome(char s[]);  //判断字符串s是否回文。

main() {
    char s[20];
    scanf("%s", s);
    if (IsPalindrome(s))
        printf("It's Palidrome!\n");
    else
        printf("It's not Palidrome!\n");
}


SeqStack *InitStack() {
    SeqStack *s;
    s = (SeqStack *) malloc(sizeof(SeqStack));
    s->top = -1;
    return s;
}

int IsEmpty(SeqStack *S) {
    return (S->top == -1 ? TRUE : FALSE);
}

int IsFull(SeqStack *S) {
    return (S->top == Stack_Size - 1 ? TRUE : FALSE);
}

int Push(SeqStack *S, ElemType x) {
    if (S->top == Stack_Size - 1)
        return (FALSE);
    S->top++;
    S->data[S->top] = x;
    return (TRUE);
}

int Pop(SeqStack *S, ElemType *x) {
    if (S->top == -1)
        return (FALSE);
    *x = S->data[S->top];
    S->top--;
    return (TRUE);
}

int GetTop(SeqStack *S, ElemType *x) {
    if (S->top == -1)
        return (FALSE);
    *x = S->data[S->top];
    return (TRUE);
}

int IsPalindrome(char s[]) {
    SeqStack *stack = InitStack();
    stack->top = 0;
    int length = strlen(s);
    while (stack->top < length / 2 && !IsFull(stack)) {
        stack->data[stack->top] = s[stack->top];
        stack->top++;
    }
    stack->top--;
    for (int i = (strlen(s) - 1) / 2 + 1; i < strlen(s); i++) {
        if (stack->data[stack->top] == s[i]) {
            stack->top--;
        } else
            break;
    }
    if (stack->top == -1)
        return 1;
    else
        return 0;
}


