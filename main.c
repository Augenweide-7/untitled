#include<stdio.h>
int min(int x,int y){
    if(x>y)
        return y;
    else
        return x;
}
int main() {
    int fz,fm;
    scanf("%d/%d",&fz,&fm);
    for(int i=1;i<min(fz,fm);i++){
        if(fz%i==0&&fm%i==0){
            fz/=i;
            fm/=i;
        }
    }
    printf("%d/%d",fz,fm);
    return 0;
}