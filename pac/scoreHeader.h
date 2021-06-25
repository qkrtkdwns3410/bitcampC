//
// Created by psj on 2021-06-25.
//

#ifndef UNTITLED_STRUCT_H
#define UNTITLED_STRUCT_H

#endif //UNTITLED_STRUCT_H

#include <stdio.h>
#include <string.h>

//전처리 정의 숫자로 대치
#define ST_SUM 20
#define NAME_LENGTH 10

//구조체 정의, 재정의
typedef struct sungjuk {
    char name[NAME_LENGTH];
    int kor, eng, mat;
    double avg;
} SUNGJUK;

//함수 정의
int inScore(SUNGJUK *, int);

void outScore(SUNGJUK *, int);

void sortScore(SUNGJUK *, int);