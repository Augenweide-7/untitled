#include<stdio.h>
int main(){
    char name[40];
    char surname[40];
    printf("Please input your firstname:");
    scanf("%s",name);
    printf("Please input your lastname:");
    scanf("%s",surname);
    printf("%s,%s",name,surname);
    return 0;
}