#include <stdio.h>


int a;
void sub();
int main(){
    int a = 7;
    printf("%d\n", a);
    a = 3;
    printf("%d\n", a);
    sub();
    printf("%d\n", a);
    return 0;
}


