#include <stdio.h>
#define size 10 
int main(void){
    //크기가 10인 배열 two[]을 선언하고 여기에 2의 제곱 값들을 저장해보자. 즉 배열의 첫 번째 요소에는 2^0을 저장하고 -- 2^9승을 저장한다.
    //for 루프를 이용하여 two[] 배열의 전체 요소의 값을 출력하는 프로그램을 작성하라.
    int two[size];
    // 2^0승은 어떻게 출력할것인가? if문을 사용해서 출력할것인가? 
    for(int i=0;i<size;i++){
        two[i]=1<<i;
    }
    for(int i=0;i<size;i++){
        printf("%d",two[i]);
    }
    //pow를 사용하는 방법도있다.
    /*
    for(int i=0;i<10;i++){
    two[i]=pow(2,i);
    printf("%d ",two[i]);
    }
    */
    return 0;
}