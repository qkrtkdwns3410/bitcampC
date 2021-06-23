#include <stdio.h>

int main() {
    int i, j;

    for (i = 2; i < 10; i++) {
        printf("구구단 %d단 \n", i);
        for (j = 1; j < 10; j++) {
            printf("%d * %d  = %d\n", i, j, i * j);
        }
        printf("\n\n");
    }

    return 0;
}

