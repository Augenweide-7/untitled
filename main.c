#include<stdio.h>
int main(){
    double input;
    int Temperatures(double fahrenheit);
    printf("Please input the degree fahrenheit:");
    int status;
    status=scanf("%lf",&input);
    while(status==1){
        Temperatures(input);
        printf("Please input the next degree fahrenheit(q to quit):");
        status=scanf("%lf",&input);
    }
    printf("Program exit!");
    return 0;
}
int Temperatures(double fahrenheit){
    const double F_TO_C=32.0;
    const double C_TO_K=273.16;
    double celsius,kelvin;
    celsius=5.0/9.0*(fahrenheit-F_TO_C);
    kelvin=celsius+C_TO_K;
    printf("F=%.2lf t=%.2lf K=%.2f\n",fahrenheit,celsius,kelvin);
    return 0;

}