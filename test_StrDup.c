#include<stdio.h>
#include<stdlib.h>

char *strDup(char const * str){
    if(str==NULL) return NULL;
    size_t len=strlen(str)+1;
    char *copy=malloc(len*sizeof(char));
    if(copy!=NULL)
         memcpy(copy,str,len);
    return copy;
}

int main(){
    char *str="zhangbinhometown";
    printf("after copy is [%s] \n",strDup(str));

    return 0;
}
