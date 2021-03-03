#include<stdio.h>
int main(){
    int n,k;
    int sum1=0,sum2=0;
    float aver1,aver2;
    float num1=0.0,num2=0.0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        if(i%k==0){
            sum1+=i;
            num1++;
        }else{
            sum2+=i;
            num2++;
        }

    }
    aver1=sum1/num1;
    aver2=sum2/num2;
    printf("%.1f %.1f",aver1,aver2);


    return 0;
}
