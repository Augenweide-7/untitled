//链表插入元素
#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
    int elem;
    struct Link *next;
}link;
link *initLink(){
    link *p=NULL;
    link *temp=(link*)malloc(sizeof(link*));
    p=temp;
    for(int i=1;i<5;i++){
        link *a=(link*)malloc(sizeof(link*));
        a->elem =i;
        a->next =NULL;
        temp->next =a;
        temp=temp->next ;
    }
    return p;
}
void displayLink(link *p){
    link *temp=p;
    while(temp->next ){
        temp=temp->next ;
        printf("%d ",temp->elem );
    }
    printf("\n");
}
link *insertLink(link *p,int elem,int add){
    link *temp=p;//创建一个临时节点
    //找到要插入位置上的一个节点
    for(int i=1;i<add;i++){
        temp=temp->next ;
        if(temp==NULL){
            printf("插入位置无效");
            return p;
        }
    }
    link *c=(link*)malloc(sizeof(link*));//创建插入节点c
    c->next =temp->next ;
    temp->next =c;
    return p;
}
int main(){
    printf("初始化链表为:\n");
    link *p=initLink();
    displayLink(p);
    insertLink(p,6,3);
    displayLink(p);
    return 0;
}