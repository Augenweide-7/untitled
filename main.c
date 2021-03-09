#include<stdio.h>
int main(){
    int K;
    scanf("%d",&K);
    int days=0,coin=0;
    for(int i=1;i<=K;i++){
        for(int j=1;j<=i;j++){
            coin+=i;
            days+=1;
            if(days==K){
                break;
            }
        }
        if(days==K){
            break;
        }
    }
    printf("%d",coin);

    return 0;
}