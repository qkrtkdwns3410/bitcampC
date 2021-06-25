#include <stdio.h>
#include <string.h>
#include "header.h"

int main() {

    int sel, totalSCnt = 0;
    SUNGJUK student[ST_SUM]; //20
    while (1) {
        puts("\n원하는 메뉴를 선택하세요.");
        puts("1.성적입력");
        puts("2.성적순 출력");
        puts("0. 종료");
        scanf("%d", &sel);

        fflush(stdin); //버퍼비워줌

        switch (sel) {

            case 1:
                totalSCnt = inScore(student, totalSCnt);
                break; //구조체배열의 시작주소
            case 2:
                outScore(student, totalSCnt);
                break;
            case 0:
                return 0;
            default:
                puts("0~3사이의 메뉴 번호를 선택하세요.");
        }

    }
}


