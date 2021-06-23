#include <stdio.h>
void add(int x, int y){
    printf("%d+%d=%d", x, y, x + y);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    add(a, b);

    return 0;

}



