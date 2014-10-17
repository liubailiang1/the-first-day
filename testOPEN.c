#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h> \\strerror

void main(){
char *filename="/mnt/MEZB_2012_01_10__14_07_44.mp4";
int mFd = open(filename, O_CREAT | O_LARGEFILE | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
     printf("MPEG4Writer2 construtor:  open filename[%s] with fd[%d] error[%s]\n",filename,mFd,strerror(errno));
    if (mFd >= 0) {
        printf("create OK");
    }
else
     printf("open error with error [%s] \n",strerror(errno));

}
