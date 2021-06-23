#include <stdio.h>

int main() {
    //0이 입력될 때까지 계속 수행되는 프로그램으로
    //0이 아닌 정수값(n)에 대해 3으로 나머지 연산한
    //결과를 출력하시오.
    int n;
    do {
        scanf("%d", &n);
        if (n != 0) {
            printf("%d %% 3=%d\n", n, n % 3);
        }
    } while (n!=0);
    return 0;

}

