#include<stdlib.h>
#include<stdio.h>
#define BCM 1
#define MBC  

void myprintf()
{
     #if BCM
       printf("HAS BCM \n");
     #else
       printf("NO bcm \n");
     #endif
     
     #ifdef MBC 
       printf("HAS MBC \n");
     #else
       printf("NO MBC \n");
     #endif
     return 0;
}

int main()
{
    myprintf();
    system("pause");
}
