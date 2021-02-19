#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[10];
    int n;
    int temp;
    bool flag=true;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1&&flag;i++){
        for(int j=0;j<n-1-i;j++){
            flag=false;
            if(a[j]>a[j+1]){
                flag=true;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }



    return 0;
}