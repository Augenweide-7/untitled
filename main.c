//创建一个无头节点的链表

#include<stdio.h>
#include<stdlib.h>
//链表中节点的结构
typedef struct Link{
    int elem;//代表数据域
    struct Link * next;//代表指针域，指向直接后继元素
}link;

//初始化链表的函数
link * initLink(){
    link * p=NULL;//创建头指针
    link * temp=(link *)malloc(sizeof(link));//创建首元节点
    //首元节点初始化
    temp->elem =1;
    temp->next =NULL;
    p=temp;//头指针指向首元节点
    //创建其他节点
    for(int i=2;i<5;i++){
        link *a=(link*)malloc(sizeof(link));
        a->elem =i;
        a->next =NULL;
        temp->next =a;
        temp=temp->next ;
    }
    //返回创建的节点，只返回头指针p即可，通过头指针可以找到整个链表
    return p;
}

//显示链表的函数
void display(link *p){
    link * temp=p;//将temp指针重新指向首元节点
    //只要temp指针指向的节点的next不是NULL，就执行输出语句
    while(temp){
        printf("%d ",temp->elem );
        temp=temp->next ;
    }
    printf("\n");
}

int main(){
    printf("初始化链表为:\n");
    link *p=initLink();
    display(p);
    return 0;
}

