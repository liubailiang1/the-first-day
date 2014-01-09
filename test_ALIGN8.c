#include<stdio.h>
#include<stdlib.h>

typedef struct _RingBuffer{
        unsigned int *prealbuf;
        unsigned char *buf;
        unsigned int size;
        unsigned int capacity;
}RingBuffer;

void testAlign8(RingBuffer **prb,int capacity)
{
     RingBuffer *rb;
     rb=malloc(sizeof(RingBuffer));
     if(rb==NULL)
     {
        printf("not enough memory\n");
     }
     memset(rb,0,sizeof(RingBuffer));
     rb->capacity=capacity;
     rb->size=0;
     //预分配的内存的大小 
     rb->prealbuf=malloc(sizeof(char)*(rb->capacity+8));
     printf("rb->prealbuf is [%x] [%d] [%d] [%x]\n",rb->prealbuf,rb->prealbuf,(unsigned int )rb->prealbuf,(unsigned int )rb->prealbuf); 
     rb->buf=(unsigned char *)((unsigned int )rb->prealbuf&(~0x3));
     printf("1 rb->buf is [%x] ,~0x3 is [%d] [%x]\n",rb->buf,~0x3,~0x3);
     rb->buf=(rb->buf==(unsigned char *)rb->prealbuf)?rb->buf:rb->buf+8; 
      printf("2 rb->buf is [%x] \n",rb->buf);
     *prb=rb;
}

int main()
{
    RingBuffer *p;
    testAlign8(&p,8);
    system("pause");
    return 0;
}
