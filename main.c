#include<stdio.h>
int main(){
    for(int i=1;i<=6;i++){
        char num='F';
        for(int j=1;j<=i;j++,num--){
            printf("%c",num);
        }
        printf("\n");
    }

    return 0;
}