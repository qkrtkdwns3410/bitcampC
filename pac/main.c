#include <stdio.h>
#include <string.h>


typedef struct tax {
    int value;
    int price;
    double rate;
} TAX; //한번에 정의와 재정의까지....

void sub(TAX *a) { //배열의 주소자체를 참조합니다.
    printf("%f", a->value * a->price * a->rate);
}

int main() {
    TAX elec = {300, 2700, 5.7};
    sub(&elec);
    return 0;
}

