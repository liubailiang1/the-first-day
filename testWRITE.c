#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h> //strerror

void main(){
char *filename="m.txt";
int mFd = open(filename, O_CREAT |  O_TRUNC | O_RDWR);// S_IRUSR | S_IWUSR);
     printf("open filename[%s] with fd[%d] error[%s]\n",filename,mFd,strerror(errno));
    if (mFd >= 0) {
        printf("create OK");
    }
else
     printf("open error with error [%s] \n",strerror(errno));
int i;
 for( i=0;i<20;i++){
 	write(mFd,"D",1);
 }

}
