#include <stdio.h>
typedef struct studentTag{ //studentTag는 식별자 역할 구조체 tag
    char name[100]; 
    int age;
    double gpa;
}student;  // stduent 는 main 함수에 struct studentTag s;를 안해도 되게끔 만들어줌

int main(){

    student a={"Park",23,4.4};
    student b={"Kim",23,4,5};

    return 0;
}