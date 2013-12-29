#include<stdio.h>
#include<stdlib.h>

static inline char *get_filename_extension( char *filename )
{
    char *ext = filename + strlen( filename );
    while( *ext != '.' && ext > filename )
        ext--;
    printf("###ext is [%s] \n",ext);
    ext += *ext == '.';
    return ext;
}

int main()
{
    char * filename="zhangbin.264";
    printf("DO GET EXTENSION [%s] \n",get_filename_extension(filename));
    system("pause");

    return 0;
}
