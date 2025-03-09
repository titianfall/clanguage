#include <stdio.h>
#define MAX_TERMS 100
typedef struct{
    int row;
    int col;
    int value;
} element;

typedef struct SparseMatrix{
    element data[MAX_TERMS]; // data 안에 row col value를 저장
    int rows;
    int cols;
    int terms; // 항의 개수
} SparseMatrix;

SparseMatrix matrix_transepose2(SparseMatrix a){ // 구조체로 정의하는 이유는? 구조체로 정의하면 반환값의 성질은 어떻게 되는지 공부하기
    SparseMatrix b;

    int bindex;//행렬 b에서의 현재 저장위치
    b.rows=a.cols;
    b.cols=a.rows;
    b.terms=a.terms; // 반복할 회수 == 개수

    if(a.terms>0){
        bindex=0;

        for(int c=0;c<a.cols;c++){
            for(int i=0;i<a.terms;i++){
                if(a.data[i].col==c){
                    //행과 열을 서로 바꿔준다
                    b.data[bindex].row = a.data[i].col; 
                    b.data[bindex].col=a.data[i].row;
                    //값을 서로 바꾼다.
                    b.data[bindex].value=a.data[i].value;
                    bindex++;
                }
            }
        }
    }
    return b; 
}

void matrix_print(SparseMatrix a){
    printf("========================================\n");
    for(int r=0;r<a.terms;r++){
        printf("( %d %d %d )\n",a.data[r].row,a.data[r].col,a.data[r].value);
    }
    printf("========================================\n");
}
int main(void){
    SparseMatrix m={
        {{0,3,7},{1,0,9},{1,5,8},{3,0,6},{3,1,5},{4,5,1},{5,2,2}}, // 0행의 3번째 열에 7이 있다는 것처럼 0이 많은 희소행렬에서 숫자만 저장한다.
        6,
        6,
        7
    };

    SparseMatrix result;

    result=matrix_transepose2(m);
    matrix_print(result);
    return 0;
}