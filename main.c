#include<stdio.h>
#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54
int main(){
    int feet;
    float cm,inches;
    printf("Enter a height in centimeters:");
    scanf("%f",&cm);
    while(cm>0){
        feet=cm/FEET_TO_CM;
        inches=(cm-feet*FEET_TO_CM)/INCH_TO_CM;
        printf("%.1f cm = %d feet,%.1f inches\n",cm,feet,inches);
        printf("Enter a height in centimeters(<=0 to quit):");
        scanf("%f",&cm);

    }
    printf("bye");
    return 0;
}