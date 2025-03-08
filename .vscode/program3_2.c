#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b));//의문문을 통한 큰수찾기
#define MAX_DEGREE 101
typedef struct{ //타입선언
    //이 구조체의 장점 >> 덧셈이나 뺄셈시 차수의 계수를 쉽게 찾을수있음
    //단점 >> 공간의 낭비가 심함 ex) 101x^100 + 6 같은경우 공간이 단 2개만 사용됨
    int degree; //차수
    float coef[MAX_DEGREE]; //계수
} polynomial;

polynomial poly_add1(polynomial A,polynomial B){ // c=a+b   A와 B는 다항식이며 구조체가 반환된다.;
    polynomial C; //결과 다항식

    int Apos =0, Bpos=0, Cpos=0; //배열의 인덱스 변수   
    int degree_a=A.degree;
    int degree_b=B.degree;

    C.degree=MAX(degree_a,degree_b); //최고 차수를 구하기

    while(Apos<=A.degree &&Bpos<=B.degree){
        if(degree_a>degree_b){
            C.coef[Cpos++]=A.coef[Apos++]; //최고 차수의 계수를 c에 (복사)입력해주기 
            degree_a--;
        }
        else if(degree_a==degree_b){ // 계수가 같다면 C에 둘다 입력해주기
            C.coef[Cpos++]=A.coef[Apos++]+B.coef[Bpos++];
            degree_a--;
            degree_b--;
        }
        else{
            C.coef[Cpos++]=B.coef[Bpos++];
            degree_b--;
        }
    }
    return C;
} 
void print_poly(polynomial p){
    for(int i=p.degree;i>0;i--){
        printf("%3.1fx^%d + ",p.coef[p.degree-i],i); // 배열 안의값을 순서대로 사용하기 위해서는 역순으로 i를 빼주어야함,i 대신 마지막에 p.degree가 오면 값이 고정되어 오류가남
    }
    printf("%3.1f \n",p.coef[p.degree]);// 상수값
}
int main(void){
    polynomial a={5,{3,6,0,0,0,10}};
    polynomial b={4,{7,0,5,0,1}};
    polynomial c;

    print_poly(a);
    print_poly(b);

    c=poly_add1(a,b);
    printf("--------------------------------------------------------------\n");
    print_poly(c);

    return 0;
}