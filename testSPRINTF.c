#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{		
   char *str=(char *)malloc((1+4+1)*sizeof(char)); //the last 1 byte for '\0' ,4 for int ,1 for char 
  //memset(str,0,3);
 int n=100;
  sprintf(str,"%c_%d",'A',n);
		
  printf("str is %s\n",str);
  return 0;

}
