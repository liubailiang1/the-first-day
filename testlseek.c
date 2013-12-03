#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>


long get_file_size(int infile)
{
    long size_of_file;
	
	/****  jump to the end of the file. ****/
    size_of_file=lseek(infile,0L,SEEK_END);
	printf("size_of_file IS [%lld] \n",size_of_file);
	if(size_of_file<0)
		perror("lseek file failure!");
	/****  get the end position. ****/
	//size_of_file = ftell(infile);
    /**** Jump back to the original position. ****/
    //fseek(infile, 0L,SEEK_SET );
	return (size_of_file);
}

int main(int argc,char *argv[])
{
    int fd;
long length;
    if(argc<2)
    {
       puts("Please input the open file pathname!\n");
      exit(1);
    }
    
    if((fd=open(argv[1],O_RDONLY))<0)
    {
     perror("Open file failure!");
     exit(1);
    }

    if((length = lseek(fd,0,SEEK_END))<0)
    {
       perror("lseek file failure!");
    }
        
    printf("The file's length is %d\n",length);
    close(fd);
    exit(0);
}
