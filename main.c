#include<stdio.h>
int main(){
    int num;
    int i=0;
    printf("Please input a number:");
    scanf("%d",&num);
    while(i++<=10){
        printf("%d\n",num);
        num++;
    }
    printf("Program exit!");
    return 0;
}