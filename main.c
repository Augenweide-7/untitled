#include<stdio.h>
int main(){
    for(int x=0;x<=100/5;x++){
        for(int y=0;y<=100/3;y++){
            for(int z=0;z<=300;z++){
                if(z%3==0){
                    if(x+y+z==100&&5*x+3*y+z/3==100){
                        printf("%d %d %d\n",x,y,z);
                    }
                }
            }
        }
    }


    return 0;
}