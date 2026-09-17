#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main(){

    srand(time(NULL));
    int year = rand()%100;
    printf("지훈이형이 결혼할 나이 = %d",year);

    return 0;
}