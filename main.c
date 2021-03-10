#include<stdio.h>
int main(){
    int sum;
    scanf("%d",&sum);
    float cost;
    if(sum<=150){
        cost=sum*0.4463;
    }else if(sum<=400){
        cost=150*0.4463+(sum-150)*0.4663;
    }else{
        cost=150*0.4463+(400-150)*0.4663+(sum-400)*0.5663;
    }
    printf("%.1f",cost);
    return 0;
}