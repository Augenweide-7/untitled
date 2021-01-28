#include<stdio.h>
int main(){
    for(int i=1;i<10;i++){
        for(int m=1;m<10-i;m++){
            printf("\t\t");
        }
        for(int j=1;j<=i;j++){
            printf("%d*%d=%2d  ",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}