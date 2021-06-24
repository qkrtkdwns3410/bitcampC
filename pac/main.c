#include <stdio.h>
#include <string.h>


char* Reverse(const char *str) {
    static char result[80]; //result 배열을 정적 지역 변수로 선언함
    int i;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        result[i] = str[len - i - 1];
    }
    result[i] = '\0';

    return result;
}

int main(){
    return Reverse();
}
