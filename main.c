//创建有头节点的链表

#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
    int elem;
    struct Link *next;
}link;
link * initLink(){
    link * p=NULL;//创建头指针
    link * temp=(link*)malloc(sizeof(link*));//创建头节点
    p=temp;//头指针指向头节点
    //创建其他节点
    for(int i=1;i<5;i++){
        link *a=(link*)malloc(sizeof(link*));
        a->elem =i;
        a->next =NULL;
        temp->next =a;
        temp=temp->next ;
    }
    return p;
}
void display(link *p){
    link* temp=p;
    while(temp->next ){
        temp=temp->next ;
        printf("%d ",temp->elem );
    }
    printf("\n");
}
int main(){
    printf("初始化链表为：\n");
    link *p=initLink();
    display(p);
    return 0;
}