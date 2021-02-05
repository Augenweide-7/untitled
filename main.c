#include<stdio.h>
int main(){
    char name[40];
    char surname[40];
    printf("Please input your firstname:");
    scanf("%s",name);
    printf("Please input your lastname:");
    scanf("%s",surname);
    int wname=printf("%s",name);
    printf(" ");
    int wsurname=printf("%s",surname);
    printf("\n");
    printf("%*d %*d",wname,wname,wsurname,wsurname);
    return 0;
}