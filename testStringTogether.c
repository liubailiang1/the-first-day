#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char *argv[])
{
 
    char *link="/mnt/scard/";
    //char filename[255] = {0};
    char *filename="filename";
	//alloc memory
    char *familyname =(char*)malloc(strlen(link) + strlen(filename) + 1);
	//copy link to str
    strcpy(familyname,link);
	//cat filename to str
    strcat(familyname,filename);
    printf("%s",familyname);
    //system("PAUSE");    
    return 0;
}
