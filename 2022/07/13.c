//2022 - 07 - 13
//최대공약수와 최소공배수
//두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.
//입력 - 첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.
//출력 - 첫째 줄에는 입력으로 주어진 두 수의 최대공약수를, 둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GreatstCommonDivisor(int A, int B) { //최대공약수
    int big, small, j, temp;
    
    if (A > B)
        big = A;
    else
        small = B;
    j = big;
    for (int i = 2; i <= j; i++) {
        if (A % i == 0 && B % i == 0)
            temp = i;
    }
    return temp;
}

int LeastCommonMultiple(int A, int B, int GCD) { //최소공배수
    int temp;
    temp = A * (B/GCD);
    
    return temp;
}


int main(void) {
    int A, B; //A 와 B 는 입력 받는 수
    int GreatstCommonDivisorResult, LeastCommonMultipleResult;
    printf("A와 B를 입력하세요 : ");
    scanf("%d %d", &A, &B);
    
    GreatstCommonDivisorResult = GreatstCommonDivisor(A, B);
    LeastCommonMultipleResult = LeastCommonMultiple(A, B, GreatstCommonDivisorResult);
    
    printf("최대공약수 : %d\n", GreatstCommonDivisorResult);
    printf("최소공배수 : %d\n", LeastCommonMultipleResult);
    
    
}
