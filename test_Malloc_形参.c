#include<stdlib.h>
typedef struct
{
   int i;     
}s;

int m(s *t)
{
    t=(s*)malloc(sizeof(s));
    t->i=100;
    printf("s.i[%d]\n",t->i);
}

void main()
{
     s *ss=NULL;
     m(ss);
     if(ss==NULL)
        printf("ss is still NULL");
     else
        printf("s->i[%d]\n",ss->i);
     system("pause");
}
