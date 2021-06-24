#include <stdio.h>
#include <string.h>

enum weekday{sun,mon,tue,wed,thu,fri, sat};

int main() {
    enum weekday w_day;
    printf("input 0 ~ 6: ");
    scanf("%d", &w_day);
    printf("\n");

    switch (w_day) {
        case sun:
            printf("Sunday");
            break;
        case mon:
            printf("Monday");
            break;
        case tue:
            printf("Thueday");
            break;
        case wed:
            printf("Wednesday");
            break;
        case thu:
            printf("Thursday");
            break;
        case fri:
            printf("F");
            break;
        case sat:
            printf("sat");
            break;
        default:
            printf("Input Correct Number");
    }
    return 0;
}



