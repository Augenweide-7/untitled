//链表删除元素
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
link *delElem(link *p,int add){
    link *temp=p;
    for(int i=1;i<add;i++){
        temp=temp->next ;
        if(temp->next ==NULL){
            printf("没有该节点\n");
            return p;
        }
    }
    link *del=temp->next ;//单独设置一个指针指向被删除的节点
    temp->next =temp->next->next ;
    free(del);//手动释放被删除的节点
    return p;
}
int main(){
    printf("初始化链表为:\n");
    link *p=initLink();
    displayLink(p);
    delElem(p,2);
    displayLink(p);
    return 0;
}