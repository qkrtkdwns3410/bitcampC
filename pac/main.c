#include <stdio.h>
#include <string.h>

int main() {
    char *str = "good morning";
    int i, count = 0;
    for (i = strlen(*str)-1; i >= 0; i--) {
        printf("%c", *(str + i));
    }

}



