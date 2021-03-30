#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char * argv){//测试文件大小
    int fd=-1;//文件描述符
    int ret=-1;
    fd=open("test3.c",O_RDONLY);
    if(fd<0){
        perror("open");
    }
    ret=lseek(fd,0,SEEK_END);//将文件指针移动到文件尾，返回相对于文件头的偏移量
    if(ret<0){
        perror("lseek");
    }
    printf("ret=%d\n",ret);
    close(fd);
    return 0;
}