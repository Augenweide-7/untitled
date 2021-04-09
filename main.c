//实现无头节点链表的逆置
#include<stdio.h>
#include<stdlib.h>
typedef struct Link{
    int elem;
    struct Link* next;
}link;

//初始化链表的函数
link* initLink();
//输出链表的函数
void displayLink(link *p);
//迭代法反转链表
link * iteration_reverse(link * head);
//递归法反转链表
link * recursive_reverse(link * head);
//头插法反转链表
link * head_reverse(link * head);
//就地逆置法反转链表
link * local_reverse(link * head);

int main(){
    link *p=initLink();
    printf("初始化链表为:\n");
    displayLink(p);

    p=iteration_reverse(p);
    displayLink(p);

    p=recursive_reverse(p);
    displayLink(p);

    p=head_reverse(p);
    displayLink(p);

    p=local_reverse(p);
    displayLink(p);
    return 0;
}

link *initLink(){
    link *p=NULL ;//创建头指针
    link *temp=(link*)malloc(sizeof(link*));//创建首元节点
    //首元节点初始化
    temp->elem =1;
    temp->next =NULL;
    p=temp;//头指针指向首元节点
    //创建其他节点
    for(int i=2;i<5;i++){
        link *a=(link*)malloc(sizeof(link*));
        a->elem =i;
        a->next =NULL;
        temp->next =a;
        temp=a;
    }
    return p;
}
void displayLink(link *p){
    link *temp=p;//将temp指向头指针
    while(temp){
        printf("%d ",temp->elem );
        temp=temp->next ;
    }
    printf("\n");
}

//迭代反转法
link *iteration_reverse(link *head){   //head为无头节点链表的头指针
    if(head==NULL||head->next==NULL){
        return head;
    }
    else{
        link *beg=NULL;
        link *mid=head;
        link *end=head->next ;
        //一直遍历
        while(1){
            //修改mid的指向
            mid->next=beg;
            //判断end是否为NULL，如果成立则退出循环
            if(end==NULL){
                break;
            }
            //整体向后移动3个指针
            beg=mid;
            mid=end;
            end=end->next ;
        }
        //最后修改head的指向
        head=mid;
        return head;
    }
}

//递归反转法
link* recursive_reverse(link *head){
    //递归出口
    if(head==NULL||head->next ==NULL){
        return head;
    }else{
        //递归部分
        link *new_head=recursive_reverse(head->next );
        //逐层退出时，new_head的指向都不变，一直指向原链表中最后一个节点；
        //递归每退出一层，函数中head指针的指向都会发生变化，指向上一个节点
        //每退出一层，都需要改变head->next节点指针域的指向，同时令head所指节点的指针域为NULL。
        head->next ->next =head;
        head->next =NULL;

        return new_head;
    }
}

//头插法反转链表
link *head_reverse(link *head){
    link *new_head=NULL;
    link *temp=NULL;
    if(head==NULL||head->next ==NULL){
        return head;
    }else{
        while(head!=NULL){
            temp=head;
            //将temp从head中移除
            head=head->next ;
            //将temp插入到new_head头部
            temp->next =new_head;
            new_head=temp;
        }
        return new_head;
    }
}

//就地逆置法反转链表
link *local_reverse(link *head){
    link *beg=NULL;
    link *end=NULL;
    if(head==NULL||head->next ==NULL){
        return head;
    }else{
        beg=head;
        end=head->next ;
        while(end!=NULL){
            //将end从链表中移除
            beg->next =end->next ;
            //将end移动至表头
            end->next =head;
            head=end;
            //调整end的指向，为反转下一个节点做准备
            end=beg->next ;
        }
        return head;
    }
}