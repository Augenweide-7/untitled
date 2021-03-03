#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int day=1;
    for(;a!=1;){
        day++;
        a=floor(a/2);
    }
    printf("%d",day);
    return 0;
}
