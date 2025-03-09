#include <stdio.h>
//포인터

void swap(int *x,int *y)
{
    int tmep;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
int main(void)
{
    int a=1,b=2;
    
    printf("a=%d , b= %d",a,b);

    swap(a,b);

    printf("a=%d , b= %d",a,b);

    return 0;
}