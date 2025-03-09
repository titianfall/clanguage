#include <stdio.h>
//포인터

void swap(int *x,int *y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
int main(void)
{
    int a=1,b=2;
    
    printf("a=%d , b= %d \n",a,b);
    swap(&a,&b);
    printf("a=%d , b= %d \n",a,b);
    return 0;
}