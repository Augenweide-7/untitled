#include<stdio.h>
int main(){
    for(int i=1;i<10;i++){
        for(int j=i ;j<10;j++){
            printf("%d*%d=%2d  ",i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}