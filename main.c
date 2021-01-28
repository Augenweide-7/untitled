#include<stdio.h>
int main(){
    unsigned int a,b,c;
    int loop=0;
    int x=0;
    for(a=0;a<=20;a++){
        for(b=0;a*5+b*2<=100;b++){
            c=100-a*5-b*2;
            printf("5分%d个，2分%d个，1分%d个\n",a,b,c);
            loop++;
        }
    }
    printf("%d",loop);
    return 0;
}