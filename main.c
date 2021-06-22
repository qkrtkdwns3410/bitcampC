#include <stdio.h>

int main() {
    int a = 5;

    if (a > 0) {
        if (a >= 100) {
            printf("Great");
        } else {
            printf("Good");
        }
    } else if (a < 0) {
        printf("Negative");
    } else {
        printf("Zero");
    }

    return 0;
}
