#include<stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609
int main(){
    float range,oil;
    printf("Please input the range yuo traveled(in mile):");
    scanf("%f",&range);
    printf("Please input the oil you spend(in gallon):");
    scanf("%f",&oil);
    printf("%.1f M/G",range/oil);
    printf("%.1f l/100KM",(oil*GALLON_TO_LITRE)/(range*MILE_TO_KM));
    return 0;
}