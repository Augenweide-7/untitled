//链表更新元素
#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
    int elem;
    struct Link*next;
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
        temp=a;
    }
    return p;
}
void displayLink(link *p){
    link*temp=p;
    while(temp->next){
        temp=temp->next ;
        printf("%d ",temp->elem );
    }
    printf("\n");
}
link *amendElem(link *p,int add,int newElem){
    link *temp=p;
    temp=temp->next ;//遍历之前temp指向头节点
    for(int i=1;i<add;i++){
        temp=temp->next ;
    }
    temp->elem =newElem;
    return p;
}
int main(){
    printf("初始化链表为:\n");
    link *p=initLink();
    displayLink(p);
    amendElem(p,3,7);
    displayLink(p);
    return 0;
}