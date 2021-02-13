#include<stdio.h>
int main(){
    char str[26];
    char num='a';
    for(int i=0;i<26;i++){
        str[i]=num;
        num++;
        printf("%c ",str[i]);
    }
    return 0;
}