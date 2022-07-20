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

int arithmetic_mean(int N, int A[]) { //산술평균
    int result;
    int B = 0;
    
    for (int i = 0; i < N; i++) {
        B = B + A[i];
    }
    
    result = B / N;
    
    return result;
    
}

int median(int N, int A[]) { //중앙값
    
    return 0;
}

int mode(int N, int A[]) { //최빈값
    
    return 0;
}

int range(int N, int A[]) { //범위
    
    return 0;
}

int main(void) {
    int N; // N은 입력의 갯수
    int A[500000] = {0,};
    int arithmetic_mean_result, median_result, mode_result, range_result;
    
    scanf("%d", &N);
    
    if (N < 1 && N > 500000) {
        return 0;
    }
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A);
    }
    arithmetic_mean_result = arithmetic_mean(N, A);
    printf("%d\n", arithmetic_mean_result);
    
}
