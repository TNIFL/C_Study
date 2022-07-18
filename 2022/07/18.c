//2022 - 07 - 18
//N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
//첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다.
//둘째 줄부터 N개의 줄에는 수 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
//첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Ascending(int A[], int N);

int main(void) {
    int N;
    int A[1000]; //A는 각  줄 마다 입력받을 수
    
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    Ascending(A, N);
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", A[i]);
    }
    
    
}

void Ascending(int A[], int N) {
    int TEMP;
    
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N - 1; k++) {
            if (A[k] > A[k + 1]) {
                TEMP = A[k];
                A[k] = A[k + 1];
                A[k + 1] = TEMP;
            }
        }
    }
}

