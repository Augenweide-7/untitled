#include<stdio.h>
int main(){
    int arr[3];
    int temp;
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3-1;i++){
        for(int j=0;j<3-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    int a=arr[0],b=arr[1],c=arr[2];
    if(a+b>c){
        if(a*a+b*b==c*c){
            printf("Right triangle\n");
        }else if(a*a+b*b>c*c){
            printf("Acute triangle\n");
        }else{
            printf("Obtuse triangle\n");
        }
        if(a==b||b==c||a==c){
            printf("Isosceles triangle\n");
        }
        if(a==b&&b==c){
            printf("Equilateral triangle\n");
        }
    }else{
        printf("Not triangle\n");
    }
    return 0;
}


