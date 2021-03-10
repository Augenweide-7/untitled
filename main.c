#include<stdio.h>
int main(){
    int a[3];
    int temp;
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3-1;i++){
        for(int j=0;j<3-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    char str[4];
    scanf("%s",&str);
    for(int i=0;str[i]!=0;i++){
        switch(str[i]){
            case 'A':
                printf("%d ",a[0]);
                break;
            case 'B':
                printf("%d ",a[1]);
                break;
            case 'C':
                printf("%d ",a[2]);
                break;
        }
    }

    return 0;
}
