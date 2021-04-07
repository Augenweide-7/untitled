//链表增删查改总结
#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
    int elem;//数据域
    struct Link *next;//指针域
}link;

//初始化链表函数
link *initLink(){
    link *p=NULL;//创建头指针
    link *temp=(link*)malloc(sizeof(link*));//创建头节点
    p=temp;//头指针指向头节点
    //创建其他节点
    for(int i=1;i<5;i++){
        link *a=(link*)malloc(sizeof(link*));
        a->elem =i;
        a->next =NULL;
        temp->next =a;
        temp=a;
    }
    return p;
}

//链表插入元素函数
link *insertElem(link *p,int elem,int add){
    link *temp=p;//创建一个临时节点
    for(int i=1;i<add;i++){
        temp=temp->next ;
        if(temp==NULL){
            printf("插入位置无效\n");
            return p;
        }
        //创建插入节点c
        link *c=(link*)malloc(sizeof(link*));
        c->elem =elem;
        //向链表中插入节点c
        c->next =temp->next ;
        temp->next =c;
    }
    return p;
}

//链表删除元素函数
link *delElem(link *p,int add){
    link *temp=p;//创建一个临时节点
    for(int i=1;i<add;i++){
        temp=temp->next ;
        if(temp->next ==NULL){
            printf("没有此节点\n");
            return p;
        }
    }
    link *del=temp->next ;//单独设置一个指针指向被删除节点，以防丢失
    temp->next =temp->next ->next ;
    free(del);//手动释放被删除的节点
    return p;
}

//链表查找元素函数
int selectElem(link *p,int elem){
    link *temp=p;//创建一个临时节点
    int i=1;
    while(temp->next ){
        temp=temp->next ;
        if(temp->elem ==elem){
            printf("%d\n",i);
        }
        i++;
    }
    //程序运行到此处表示查找失败
    return -1;
}

//链表更改元素函数
link *amendElem(link *p,int add,int newElem){
    link *temp=p;
    temp=temp->next ;//遍历之前让temp指向首元节点
    for(int i=1;i<add;i++){
        temp=temp->next ;
    }
    temp->elem =newElem;
    return p;
}

//显示链表的函数
void displayLink(link *p){
    link *temp=p;
    while(temp->next ){
        temp=temp->next ;
        printf("%d ",temp->elem );
    }
    printf("\n");
}

int main(){
    printf("初始化链表为:\n");
    link *p=initLink();
    displayLink(p);
    //链表插入元素
    insertElem(p,8,2);
    displayLink(p);
    //链表删除元素
    delElem(p,3);
    displayLink(p);
    //链表查找元素
    selectElem(p,8);
    //链表更改元素
    amendElem(p,2,2);
    displayLink(p);
    return 0;
}