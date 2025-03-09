#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
//동적 메모리할당 malloc을 이용하여 정수 10을 저장할 수 있는 동적 메모리를 할당하고 free를 이용하여 메모리를 반납한다.

#define size 10

int main(void){
    int *p;
    p=(*int)malloc(size*sizeof(int));
    //동적할당을 해주기 전에 포인터가 널인지 확인해야한다. 널포인터를 간접참조 하려하면 시스템에서 오류가 발생하고 쉽게 알수없기 때문임

    if(p==NULL){
        fprintf(stderr,"메모리가 부족하여 할달할 수 없습니다.\n");
        exit(1);
    }
    for(int i=0;i<size;i++){
        p[i]=i;
    }
    for(int i=0;i<sizeli++){
        printf("%d",p[i]);
    }

    free(p);
    return 0;
}