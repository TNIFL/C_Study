//숫자의 합
//N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
//첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
//2022 - 07 - 12
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int plus_NoBlank(int NoBlank) { // A는 공백 없이 입력받은 값
    int Num = 0;
    while (NoBlank != 0) {
        Num += NoBlank % 10;
        NoBlank /= 10;
    }
    return Num;
}

int main(void) {
    int N, B;
    int result = 0;
    char NoBlank[100];
    printf("숫자의 개수 : ");
    scanf("%d", &N);
    printf("공백 없이 입력 : ");
    scanf("%s", NoBlank);
    B = atoi(NoBlank);
    result = plus_NoBlank(B);
    printf("각 자릿수의 합 : %d\n", result);
    
}
