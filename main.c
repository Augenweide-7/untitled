//链表查找元素
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
int selectElem(link *p,int elem){
    link *t=p;//创建一个临时节点
    int i=1;
    while(t->next ){
        t=t->next ;
        if(t->elem ==elem){
            printf("%d",i);
        }
        i++;
    }
    //程序执行至此，表示查找失败
    return -1;
}
int main(){
    printf("初始化链表为:\n");
    link *p=initLink();
    displayLink(p);
    selectElem(p,4);
    return 0;
}