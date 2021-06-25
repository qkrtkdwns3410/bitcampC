//
// Created by psj on 2021-06-25.
//


#include "scoreheader.h"

int inScore(SUNGJUK* st, int cnt) {
    char op;
    do {
        fflush(stdin);
        printf("\n이름 : ");
        gets(st[cnt].name);
        printf("국어 : ");
        scanf("%d", &st[cnt].kor);
        printf("영어 : ");
        scanf("%d", &st[cnt].eng);
        printf("수학 : ");
        scanf("%d", &st[cnt].mat);

        puts("계속 입력하시겠습니까?(y/n)");
        fflush(stdin);
        op = getc(stdin);
        st[cnt].avg =
                (double)(st[cnt].kor + st[cnt].eng + st[cnt].mat) / 3.0;
        cnt++;
    } while (op != 'n');
    return cnt;

}

void outScore(SUNGJUK* st, int cnt)
{
    int i;
    sortScore(st, cnt);
    printf("\n----------------------------------------------------");
    printf("\n      순위 이름 국어 영어 수학 평균 ");
    printf("\n----------------------------------------------------\n");
    for (i = 0; i < cnt; i++)
    {
        printf("% 2d %10s %5d %5d %5d %3.1f\n",
               i + 1, st[i].name, st[i].kor, st[i].eng, st[i].mat, st[i].avg);
    }
}

void sortScore(SUNGJUK* st, int cnt)
{
    SUNGJUK temp;
    int i, j;
    for (i = 0; i < cnt - 1; i++)
    {
        for (j = 0; j < (cnt - i) - 1; j++)
        {
            if (st[j].avg < st[j + 1].avg)
            {
                temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }

}