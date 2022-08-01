//2022 - 07 - 20
//N은 홀수라고 가정하자.
/*
 산술평균 : N개의 수들의 합을 N으로 나눈 값
 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
 최빈값 : N개의 수들 중 가장 많이 나타나는 값
 범위 : N개의 수들 중 최댓값과 최솟값의 차이
 */
//N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.
//첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 단, N은 홀수이다. 그 다음 N개의 줄에는 정수들이 주어진다.
//입력되는 정수의 절댓값은 4,000을 넘지 않는다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

int arithmetic_mean(int N, int A[]) { //산술평균
    double result;
    int B = 0;
    
    for (int i = 0; i < N; i++) {
        B = B + A[i];
    }
    
    result = (double)B / N;
    
    return (int)round(result);
    
}

int median(int N, int A[]) { //값을 크기 순서대로 나열 후 중앙값
        
    if (N == 1)
        return A[0];
    else
        return A[(N + 1) / 2 - 1];
}

int mode(int N, int A[]) {
    int summary[8001] = {0,};
    int max_count = 0;
    int first_index = -1;

    for (int i = 0; i < N; i++) {
        summary[A[i] + 4000] += 1;
    }

    for (int i = 0; i < sizeof(summary) / sizeof(int); i++) {
        if (max_count < summary[i]) {
            max_count = summary[i];
        }
    }

    for (int i = 0; i < sizeof(summary) / sizeof(int); i++) {
        if (summary[i] == max_count) {
            if (first_index != -1) {
                return i - 4000;
            } else {
                first_index = i;
            }
        }
    }
    return first_index - 4000;
}

int range(int N, int A[]) { //범위
    int MAX = 0;
    int MIN = 0;
    
    MAX = A[N - 1];
    MIN = A[0];
    
    return MAX - MIN;
}

int main(void) {
    int N; // N은 입력의 갯수
    int A[500000] = {0,};
    int arithmetic_mean_result, median_result, mode_result, range_result;
    
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    qsort(A, N, sizeof(int), compare);
    arithmetic_mean_result = arithmetic_mean(N, A);
    printf("%d\n", arithmetic_mean_result);
    median_result = median(N, A);
    printf("%d\n", median_result);
    mode_result = mode(N, A);
    printf("%d\n", mode_result);
    range_result = range(N, A);
    printf("%d", range_result);
}
