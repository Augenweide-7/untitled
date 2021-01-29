#include<stdio.h>
int main(){
    for(int i=1;i<10;i++){
        for(int m=1;m<i;m++){
            printf("\t\t");
        }
        for(int j=i ;j<10;j++){
            printf("%d*%d=%2d  ",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}