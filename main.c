#include<stdio.h>
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int times=0;
    for(int i=1;i<=n;i++){
        int temp=i;
        int c;
        while(temp>0){
            c=temp%10;
            temp/=10;
            if(c==x){
                times++;
            }
        }
    }
    printf("%d",times);
    return 0;
}