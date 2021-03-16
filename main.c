#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);//读取需要的铅笔数量
    double num1,num2,num3;
    int price1,price2,price3;
    int fee1,fee2,fee3;
    int fee;
    scanf("%lf %d\n%lf %d\n%lf %d",&num1,&price1,&num2,&price2,&num3,&price3);//读取三种包装的数量和价格
    fee1=ceil(n/num1)*price1;
    fee2=ceil(n/num2)*price2;
    fee3=ceil(n/num3)*price3;//计算三种包装的价格
    if(fee1<fee2&&fee1<fee3)
        fee=fee1;
    if(fee2<fee1&&fee2<fee3)
        fee=fee2;
    if(fee3<fee2&&fee3<fee1)
        fee=fee3;//比较三种包装价格最低的一种
    printf("%d",fee);//输出最终价格
    return 0;
}