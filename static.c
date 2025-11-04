#include <stdio.h>

void Test1(void) {
    int a = 0;   // 일반 지역 변수
    printf("%d, ", a);
    a++;
}

void Test2(void) {
    static int a = 0;   // static 지역 변수 (초기화 1번만)
    printf("%d, ", a);
    a++;
}

void Test3(void) {
    static int a = 1;   // static + 초기값 1
    printf("%d, ", a);
    a++;
}

int main(void) {
    printf("Test1():\n");
    for (int i = 0; i < 5; i++) Test1();
    printf("\n\n");

    printf("Test2():\n");
    for (int i = 0; i < 5; i++) Test2();
    printf("\n\n");

    printf("Test3():\n");
    for (int i = 0; i < 5; i++) Test3();
    printf("\n\n");

    return 0;
}