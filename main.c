#include<stdio.h>
#include<math.h>
int main(){
    float pi=0.0;
    float i=1.0;
    float sign=1.0;
    float n=1.0;
    while(fabs(i)>=1e-6){
        pi+=i;
        sign=-sign;
        n+=2;
        i=sign/n;

    }
    pi=pi*4;
    printf("%.6f",pi);


    return 0;
}