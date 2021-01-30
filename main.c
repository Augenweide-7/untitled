#include<stdio.h>
#include<math.h>
int main(){
    float pi=1.0;
    float n=1;
    int i;
    for(i=1;i<=100;i++,n++){
        if(i%2==0){
            pi*=(n/(n+1));
        }else{
            pi*=((n+1)/n);
        }
    }
    pi=pi*2;
    printf("%.6f",pi);
    return 0;
}