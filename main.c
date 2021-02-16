#include<stdio.h>
int main(){
    int arr[5][3];
    int aver[3];
    int sum;
    int average;
    printf("Please input the score:");
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        aver[i]=sum/5;
        sum=0;
    }
    average=(aver[0]+aver[1]+aver[2])/3;
    printf("Math:%d\nLanguage:%d\nEnglish:%d\n ",aver[0],aver[1],aver[2]);
    printf("Average:%d",average);
    return 0;
}