#include<stdio.h>
#include<stdlib.h>
#define Size 5
typedef struct Table{
    int * head;
    int length;//记录顺序表的长度
    int size;//记录顺序表分配的存储容量
}table;

//创建一个空顺序表并初始化
table initTable(){
    table t;
    t.head=(int*)malloc(Size*sizeof(int));//动态申请存储空间
    if(!t.head){//如果申请失败做出提示并退出程序
        printf("初始化失败");
        exit(0);
    }
    //如果申请成功初始化顺序表的长度为0和初始存储空间为Size
    t.length=0;
    t.size=Size;
    return t;
}

//顺序表插入元素
table addTable(table t,int elem,int add){//elem为要插入的元素，add为要插入的位置
    if(add>t.length||add<1){
        printf("插入位置有问题\n");
        return t;
    }
    //查看顺序表是否有多余的存储空间提供给插入的元素，如果没有则需要申请
    if(t.length>=t.size){
        t.head=(int *)realloc(t.head,(t.size+1)*sizeof(int));
        if(!t.head){//如果分配失败做出提示并退出程序
            printf("存储分配失败\n");
            return t;
        }//如果分配成功顺序表的存储容量+1
        t.size+1;
    }
    //插入操作，从插入位置开始之后的元素后移
    for(int i=t.length-1;i>=add-1;i--){
        t.head[i+1]=t.head[i];
    }
    t.head[add-1]=elem;
    //插入成功，顺序表长度+1
    t.length++;
    return t;
}

//顺序表删除元素
table delTable(table t,int add){
    if(add>t.length||add<1){
        printf("要删除元素的位置有问题\n");
        return t;
    }
    //删除操作
    for(int i=add;i<t.length;i++){
        t.head[i-1]=t.head[i];
    }
    t.length--;
    return t;
}

//顺序表查找元素
int selectTable(table t,int elem){
    for(int i=0;i<t.length;i++){
        if(t.head[i]==elem){
            return i+1;
        }
    }
    return -1;//查找失败返回-1
}

//顺序表更改元素
table amendTable(table t,int elem,int newElem){
    int add=selectTable(t,elem);
    t.head[add-1]=newElem;
    return t;
}

//输出顺序表
void displayTable(table t){
    for(int i=0;i<t.length;i++){
        printf("%d ",t.head[i]);
    }
    printf("\n");
}
int main(){
    table t1=initTable();
    for(int i=1;i<=Size;i++){
        t1.head[i-1]=i;
        t1.length++;
    }
    printf("原顺序表:\n");
    displayTable(t1);

    printf("删除元素位置为1的元素:\n");
    t1=delTable(t1,1);
    displayTable(t1);

    printf("在第2的位置插入元素5:\n");
    t1=addTable(t1,5,2);
    displayTable(t1);

    printf("查找元素2的位置:\n");
    int add=selectTable(t1,2);
    printf("%d\n",add);

    printf("将元素3改为6:\n");
    t1=amendTable(t1,3,6);
    displayTable(t1);
    return 0;
}