//2022 - 07 - 19
//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
//첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다.
//이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
//첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int compare(const void *A, const void *B) {
    int Num1 = *(int *)A;
    int Num2 = *(int *)B;
    
    if (Num1 < Num2) {
        return -1;
    }
    if (Num1 > Num2) {
        return 1;
    }
    return 0;
}


int main(void) {
    int N, size;
    
    scanf("%d", &N);
    
    int Arr[N]; //A는 각 줄 마다 입력받을 수
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }
    
    size = sizeof(Arr) / sizeof(int);
    
    qsort(Arr, size, sizeof(int), compare);
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", Arr[i]);
    }
    
    
}
