#include <stdio.h>
#define size 6

void get_integers(int list[])
{
    printf("6개의 정수를 입력하시오: ");
    for(int i=0;i<size;i++){ //Q1. (선행연산을 하는 이유?) 책에는 ++i 로 입력하라고 되어있는데 i++로 입력해야하는것이 아닌가? >> 
        scanf("%d ",list[i]);
    }
}

int cal_sum(int list[])
{
    int sum=0;
    for(int i=0;i<SIZE;i++){
        sum+=*(list + i);//*list 를 호출하는 방법  
    }
    return sum;
}
int main(void)
{
    int list[size];

    get_integers(list);
    printf("sum = %d \n",cal_sum(list));
    return 0;
}