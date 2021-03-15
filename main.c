#include<stdio.h>
int main() {
    int arr[3];
    int temp;
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);//读取三个勾股数
    }
    for(int i=0;i<3-1;i++){
        for(int j=0;j<3-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;//将三个勾股数排序
            }
        }
    }
    int a=arr[0],b=arr[1],c=arr[2];
    int sin=a/c;//定义较小锐角的正弦值
    for(int i=1;i<a;i++){
        if(a%i==0&&b%i==0){
            a/=i;
            c/=i;
        }
    }//约分
    printf("%d/%d",a,c);//输出较小锐角的正弦值
    return 0;
}