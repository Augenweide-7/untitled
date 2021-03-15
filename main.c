#include<stdio.h>
int main() {
    int a[10];
    int height;
    int h=30;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);//读取10个苹果到地面的高度
    }
    scanf("%d", &height);//读取手伸直时能达到的高度
    int loop=0;
    for (int i = 0; i < 10; i++) {
        if (a[i]<=height+h){
            loop++;
        }
    }
    printf("%d",loop);
    return 0;
}