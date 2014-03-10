#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{		
  int i;
   for(i=0;i<2;i++)
  {
      char *str=(char *)malloc((1+4+1)*sizeof(char)); //the last 1 byte for '\0' ,4 for int ,1 for char 
      memset(str,0,1+4+1);
      int n=100;
	//malloc six bytes for str, but str could have at most 14 bytes and one '\0'(1 byte) ?
      sprintf(str,"%c+%d+=bcdefgh",'A',n+i);//strlen(str) is 15 will crash for " free(): invalid next size (fast): 0x08111008 ***"
		
     //str is a pointer ,so sizeof(str) is 4
      printf("str is %s   strlen(str) is [%d] sizeof(str) is [%d] sizeof(char) [%d]\n",str,strlen(str),sizeof(str),sizeof(char));
      free(str);
  }
  return 0;

}
