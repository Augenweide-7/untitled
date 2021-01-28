#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int a=0,b=0,c=0,d=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        if('a'<=str[i]&&str[i]<='z'||'A'<=str[i]&&str[i]<='Z'){
            a++;
        }else if(str[i]==' '){
            b++;
        }else if('0'<=str[i]&&str[i]<='9'){
            c++;
        }else{
            d++;
        }

    }
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;
}