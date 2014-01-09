#include<stdio.h>
#include<stdlib.h>

static inline char *get_filename_extension( char *filename )
{
    char *ext = filename + strlen( filename );
    while( *ext != '.' && ext > filename )
        ext--;
    printf("###ext is [%s] \n",ext);  //这个时候还是 .264 
    //== 的优先级，高于+=  
    ext += *ext == '.';
    return ext;  //这个时候是264 
}

int main()
{
    char * filename="zhangbin.264";
    printf("DO GET EXTENSION [%s] \n",get_filename_extension(filename));
    system("pause");

    return 0;
}
