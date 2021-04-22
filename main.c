#include<stdio.h>
int main(){
    char c;
    int n;
    int i,j;
    scanf("%c %d",&c,&n);
    for(i=1;i<=n/2+1;i++){
        for(j=n/2;j>=i;j--){
            printf(" ");
        }
        for(j=0;j<i*2-1;j++){
            if(j==0||j==i*2-2){
                printf("%c",c);
            }
            else{
                printf(" ");
            }
        }
        c+=1;
        printf("\n");
    }
    c-=1;
    for(i=1;i<=n/2;i++){
        c-=1;
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=n-2;j>=i*2-1;j--){
            if(j==n-2||j==i*2-1){
                printf("%c",c);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}