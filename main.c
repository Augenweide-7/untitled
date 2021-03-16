#include<stdio.h>
int main(){
    char a[14],mod[12]="0123456789X";
    gets(a);//输入字符串
    int j=1,t=0;
    for(int i=0;i<12;i++){
        if(a[i]=='-')
            continue;
        else
            t+=(a[i]-'0')*j++;//计算识别码
    }
    if(mod[t%11]==a[12])//判断识别码是否正确
        printf("Right");
    else{
        a[12]=mod[t%11];
        puts(a);
    }
    return 0;
}