#include<stdio.h>
int main(){
    int M,N;
    int i,j,n=0,f=0;
    int a[20],b[20],c[30];
    scanf("%d",&M);
    for(i=0;i<M;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            if(b[j]== a[i]){
                f=0;
                break;
            }else{
                f=1;
            }
        }
        if(f==1){
            c[n]=a[i];
            n++;
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(b[i]==a[j]){
                f=0;
                break;
            }else{
                f=1;
            }
        }
        if(f==1){
            c[n]=b[i];
            n++;
        }
    }
    printf("%d",c[0]);
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(c[i]==c[j]){
                f=0;
                break;
            }else{
                f=1;
            }
        }
        if(f==1){
            printf(" %d",c[j]);
        }
    }
    return 0;
}