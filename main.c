#include<stdio.h>
double cube(double num);
int main(){
    double num;
    printf("Please input a number:");
    scanf("%lf",&num);
    cube(num);
    printf("Program exit!");
    return 0;
}
double cube(double num){
    double n=num*num*num;
    printf("%lf\n",n);
}