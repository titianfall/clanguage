#include <stdio.h>
// complex 라는 새로운 자료형에 float real,imaginary 를 생성하고 변수 c1 c2를 선언하라
typedef struct complex{
    float real;
    float imaginary;
}complex;

int main(void)
{
    complex c1={1,2};
    complex c2={4,8};
}