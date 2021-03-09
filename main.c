#include<stdio.h>
#include<stdbool.h>
int main(){
    bool flag=true;
    int k,n=1;
    scanf("%d",&k);
    double num,Sn=0.0;
    if(k==0){
        printf("0");
    }else{
        for(int i=1;flag;i++){
            num=1.0/i;
            Sn+=num;
            if(Sn<=k){
                flag=true;
                n++;
            }else{
                flag=false;
            }

        }
        printf("%d",n);
    }
    return 0;
}