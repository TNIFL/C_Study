//2022 - 08 - 01
//소트인사이드
//배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.
//첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.
//첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.

#include <stdio.h>

int main(void) {
    int N;  //N은 1,000,000,000보다 작거나 같은 자연수
    int TEMP;
    int Arr[10];
    scanf("%d", &N);
    
    
    int i = 0;
    while (1) {
        Arr[i] = N % 10;
        if (N / 10 == 0) {
            break;
        }
        else {
            N /= 10;
            i++;
        }
    }
    for (int j = 0; j < i; j++) {
        for (int k = j + 1; k < i + 1; k++) {
            if (Arr[j] < Arr[k]) {
                TEMP = Arr[k];
                Arr[k] = Arr[j];
                Arr[j] = TEMP;
            }
        }
    }
    
    for (int j = 0; j < i; j++) {
        printf("%d", Arr[j]);
        
    }
    printf("%d", Arr[i]);
    printf("\n");
    
    return 0;
}