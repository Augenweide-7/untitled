#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            t++;
            printf("%02d",t);
            }
        printf("\n");
        }

    return 0;
}