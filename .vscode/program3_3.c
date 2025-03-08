#include <stdio.h>
#define MAX_TERMS 101
//
typedef struct{ // typedef 를 사용하지 않았는데 typedef란 무엇인가? 공부하기
    float coef;
    int expon;
}Polynomial;
Polynomial terms[MAX_TERMS]={{8,3},{7,1},{1,0},{10,3},{3,2},{1,0}};
int avail=6; // 전역 avail은 비어있는 요소의 index를 가르킨다. 
//두개의 정수를 비교
char compare(int a,int b){
    if(a>b) return '>';
    else if(a==b) return '=';
    else  return '<';
}
//새로운 항을 다항식에 추가한다.
void attach(float coef,int expon){
    if(avail>MAX_TERMS){
        fprintf(stderr,"항의 개수가 너무 많음\n");// Q1. fprintf란? 공부하기
        exit(1);
    }
    terms[avail].coef=coef;
    terms[avail].expon=expon;
    avail++;
}
//C=A+B
Polynomial poly_add2(int As,int Ae, int Bs, int Be, int *Cs,int *Ce){
    float tempcoef;
    *Cs=avail;
    while(As<=Ae && Bs<=Be){
        switch(compare(terms[As].expon,terms[Bs].expon)){
         // 차수비교 
        case '>':
            attach(terms[As].coef,terms[As].expon);
            As++;
        case '=':
            //attach는 두번 실행시 값이 덮어씌워짐 때문에 tmepcoef 가 필요하다. 계수
            tempcoef = terms[As].coef+terms[Bs].coef;
            attach(tempcoef,terms[As].expon);
            As++;
            Bs++;
        case '<':
            attach(terms[Bs].coef,terms[Bs].expon);
            Bs++;
        }
    }
    //계수가 있는걸 처리해준 후 나머지 남은 값들을 옮겨줌
    for(;As<=Ae;As++){
        attach(terms[As].coef,terms[As].expon);

    }
    for(;Bs<=Be;Bs++){
        attach(terms[Bs].coef,terms[Bs].expon);
    }
    *Ce=avail-1;
}
print_poly(int s,int e){
    for(int i=s;i<e;i++){
        printf("%3.1f^x + ",terms[i].coef,terms[i].expon);
    }
    printf("%3.1f^x + ",terms[e].coef,terms[e].expon);
}
int main(void){

    int As=0, Ae=2, Bs=3, Be=5, Cs, Ce;

    poly_add2(As,Ae,Bs,Be,&Cs,&Ce); // 
    print_poly(As,Ae);
    print_poly(Bs,Be);

    printf("---------------------------------------------------------\n");

    printf_poly(Cs,Ce);
    return 0;
}