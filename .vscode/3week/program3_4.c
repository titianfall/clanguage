#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3
int matrix[MAX_ROWS][MAX_COLS]; // 2차원 배열 
//희소행렬의 전치행렬 구현 방법1 

void matrix_transpose(int A[MAX_ROWS][MAX_COLS],int B[MAX_ROWS][MAX_COLS])
{
    for(int r=0;r<MAX_ROWS;r++){
        for(int c=0;c<MAX_COLS;c++){
            B[r][c]=A[c][r]; // 행과 열을 ij에서 ji로 변환
        }
    }
}
void matrix_print(int A[MAX_ROWS][MAX_COLS]){
    printf("==============================\n");
    for(int r=0;r<MAX_ROWS;r++){
        for(int c=0;c<MAX_COLS;c++){
            printf("%d ",A[r][c]);
        }
        printf("\n");
    }
    printf("===============================\n");
}
int main(void)
{
    int array1[MAX_ROWS][MAX_COLS]={{2,3,0},
                                    {8,9,1},
                                    {7,0,5}};
    int array2[MAX_ROWS][MAX_COLS];

    matrix_transpose(array1,array2); // 전치행렬 변환
    matrix_print(array1);
    matrix_print(array2);

    return 0;
}