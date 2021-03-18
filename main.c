#include<stdio.h>
int main(){
    long long int N;
    scanf("%lld",&N);
    if(N==0){
        printf("0");
    }else if(N<0){
        N=-N;
        printf("-");
    }
    int b,flag=0;
    while(N!=0){
        b=N%10;
        N=N/10;
        if(b!=0||flag){
            printf("%d",b);
            flag=1;
        }
    }
    return 0;
}
