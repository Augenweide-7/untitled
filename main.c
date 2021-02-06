#include<stdio.h>
#define MIN_PER_HOUR 60
int main(){
    int hour,min,input;
    printf("Please input the number of minutes(<=0 to quit):");
    scanf("%d",&input);
    while(input>0){
        hour=input/MIN_PER_HOUR;
        min=input%MIN_PER_HOUR;
        printf("%d hour and %d minutes\n",hour,min);
        printf("Please input the number of minutes(<=0 to quit):");
        scanf("%d",&input);
    }
    printf("Program exit!");

    return 0;
}