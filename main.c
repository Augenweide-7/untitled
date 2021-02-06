#include<stdio.h>
#define DAY_PER_WEEK 7;
int main(){
    int day,week,input;
    printf("Please input the number of days(<=0 to quit):");
    scanf("%d",&input);
    while(input>0){
        week=input/DAY_PER_WEEK;
        day=input%DAY_PER_WEEK;
        printf("%d days are %d weeks,%d days\n",input,week,day);
        printf("Please input the number of days(<=0 to quit):");
        scanf("%d",&input);
    }
    printf("Program exit!");
    return 0;
}