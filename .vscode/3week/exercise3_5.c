// 문자로된 이름, 사람의 나이, 개인의 월급 float 등이 포함된 구조체 person 정의
#include <stdio.h>
#include <string.h>

typedef struct Person{
    char name[100];
    int age;
    float salary;
}Person;
int main(void){

    Person p; // char name[100]은 공백을 입력받는가 >> scanf 사용시 주의 공백이 들어오면 입력이 끊김 fgets()함수 사용추천
    fgets(p.name,sizeof(p.name),stdin);
    p.age=23;
    p.salary=100000000;
    // fgets()함수는 \n 까지 하나로 입력받는다 \n을 빼주는 추가적인 작업을 해주어야한다.
    p.name[strcspn(p.name,"\n")]=0;

    printf("%s %d %lf",p.name,p.age,p.salary);

    return 0;
}