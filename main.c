#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        if(i<=m/2+1){
            for(int j=1;j<=m;j++){
                if(j>=m/2-i+2&&j<=m/2+i){
                    printf("*");
                }else{
                    printf(" ");
                }
            }printf("\n");
        }else{
            for(int j=1;j<m;j++){
                if(j>=i-m/2&&j<=m-(i-m/2-1)){
                    printf("*");
                }else{
                    printf(" ");
                }
            }printf("\n");

        }
    }



    return 0;
}