#include<stdio.h>
int main(){
    int max=0,sum,day;
    int a,b;
    for(int i=1;i<8;i++){
        scanf("%d %d",&a,&b);
        sum=a+b;
        if(sum>max&&sum>8){
            day=i;
            max=sum;
        }
    }
    printf("%d",day);
    return 0;
}