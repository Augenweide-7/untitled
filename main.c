#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    bool flag=true;
    for(int i=1;i<=n-1&&flag;i++){
        for(int j=1;j<=n-i;j++){
            flag=false;
            if(a[j-1]>a[j]){
                flag=true;
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;

            }
        }
    }
    printf("%d",a[n-1]-a[0]);
    return 0;
}