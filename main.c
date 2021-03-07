#include<stdio.h>
int main(){
    float s,n,sum=2;
    scanf("%f",&s);
    int loop=1;
    for(n=2;sum<s;loop++){
        n=n*0.98;
        sum+=n;
    }
    printf("%d",loop);
    return 0;
}