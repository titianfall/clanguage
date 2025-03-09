#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>
#include <string.h>
typedef struct studentTag{
    char name[10];
    int age;
    double gpa;
} student;


int main(void)
{
    student *s;

    s=(student *)malloc(sizeof(student));
    if(s==NULL){
        fprintf(stderr,"메모리가 부족해서 할당할 수 없습니다.\n");
        exit(1);
    }
    strcpy(s->name,"Park"); // (*s).name 이라고 할수도 있다. << string.h 헤더에 내장되어있다.
    s->age = 23;
    s->gpa = 4.4;

    printf("%s %d %f",s->name,s->age,s->gpa); //name은 문자이므로 %c > %s 이다.
    free(s);
    return 0;
}