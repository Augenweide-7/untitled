#include<stdio.h>
#include<stdlib.h>
int main(){
    int yea,mon;
    scanf("%d %d",&yea,&mon);
    switch(mon){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        case 2:
            if(yea%4==0&&yea%100!=0||yea%400==0){
                printf("29");
            }else{
                printf("28");
            }
    }

    return 0;
}