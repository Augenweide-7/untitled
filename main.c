#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char *argv[]){
    int fd[2];
    char buf[80];
    if(pipe(fd)==-1){
        perror("pipe");
        exit(1);
    }
    printf("The pipe will read from %d,write to %d.\n",fd[0],fd[1]);
    write(fd[1],"This is write to pipe!\n",23);
    read(fd[0],buf,23);
    printf("%s",buf);
    return 0;
}