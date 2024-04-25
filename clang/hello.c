#include <stdio.h>

int isPrime(int number) {
    int i;
    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number = 100, cnt = 0, i;
    for (i = 1; i < number; i++) {
        cnt += isPrime(i);
    }

    printf("%d", cnt); // 형식 지정자가 누락되어 추가되었습니다.
    return 0;
}
