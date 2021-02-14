#include<stdio.h>
int main(){
    char num='A';
    for(int i=1;i<=6;i++){
        for(int j=1;j<=i;j++,num++){
            printf("%c",num);
        }
        printf("\n");
    }

    return 0;
}