//2022 - 07 - 14
//회문 판별
//회문(palindrome)은 순서를 거꾸로 읽어도 제대로 읽은 것과 같은 단어와 문장을 말합니다. 예를 들면 "level", "SOS", "rotator", "nurses run"과 같은 단어와 문장이 있지요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    int NumberOfLetters;
    char Letter[100];
    bool boolean = true;
    
    printf("글자를 입력하세요 : ");
    scanf("%s", Letter);
    
    NumberOfLetters = strlen(Letter);
    
    for (int i = 0; i < NumberOfLetters / 2; i++) {
        if (Letter[i] != Letter[NumberOfLetters - 1 - i]) {
            boolean = false;
            break;
        }
    }
    printf("%d\n", boolean);
}
