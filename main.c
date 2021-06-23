#include <stdio.h>

int main() {
    int i=0, n;
    int sum_odd = 0, sum_even = 0;
    scanf("%d", &n); //입력한 정수 n
    while (i <= n) {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
        i++;
    }
    printf("짝수의 합: %d\n", sum_even);
    printf("홀수의 합: %d\n", sum_odd);


    return 0;

}

