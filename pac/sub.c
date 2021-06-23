#include <stdio.h>

extern int a;

void sub() {
    printf("%d\n", a);
    a++;
}
