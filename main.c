#include<stdio.h>
int main(){
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            if(j<=i){
                printf("%d*%d=%2d ",i,j,i*j);
            }else{
                printf("\t");
            }

        }
        printf("\n");
    }


    return 0;
}