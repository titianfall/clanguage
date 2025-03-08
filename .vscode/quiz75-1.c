#include <stdio.h>
#include <math.h>//squr 루트 사용하기위함
typedef struct Point{ //1. 2차원 좌표공간에서 하나의 점을 나타내는 구조체 Point를 정의하여 보라. typedef도 사용하여서 구조체 point를 하나의 타입으로 정의한다.
    int x;
    int y;
}Point;
double get_distance(Point p1,Point p2){
    // 1. distance 를 계산할때 음수는 단순히 제곱을하면 되는가?
    int a=p2.x-p1.x;
    int b=p2.y-p1.y;
    double dist = sqrt(a*a+b*b);
    return dist;
}
int main(void){
    //2. 정의한 구조체의 변수인 p1과 p2를 정의하여 보라.
    Point p1={1,2};
    //3. p1과 p2를 1,2와 9,8로 초기화하라.
    Point p2={9,8};

    //4. 점을 나타내는 두개의 구조체 변수를 받아서 점 사이의 거리를 계산하는 함수 get_distance(Point p1,Point p2)를 작성하여보라.
    double distance;
    distance = get_distance(p1,p2);
    
    printf("%f\n",distance); // c언어 멍청실수 &distance 라고 씀

    return 0;

}