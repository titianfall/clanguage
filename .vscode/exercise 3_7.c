#include <stdio.h>

//복소수를 구조체로 표현하여보자. 복소수 a와 복소수 b를 받아서 a+b를 계산하는 함수를 작성해보자. 함수는 구조체를 반환할 수 있다. 알다시피 복소수는 real+ imag*i의 형태를 갖는다.
typedef struct Complex{
    float real;
    float imag;
}Complex;

Complex complex_add(Complex a,Complex b){
    Complex C;
    C.real=a.real + b.real;
    C.imag = a.imag + b.imag;

    return C;
}

void print_Complex(m){
    printf("--------------------------------\n");
    printf("%f %f*i \n",m.real,m.imag); // float 함수는 printf 함수에서 자동으로 double로 승격된다. 따라서 lf와 f 둘다 써도 상관이 없다.
    printf("--------------------------------\n");
}
int main(void){
    Complex A={2,5};
    Complex B={4,3};

    Complex result=complex_add(A,B);

    print_Complex(A);
    print_complex(B);
    print_Complex(result);

}