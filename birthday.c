
#include <stdio.h>

int main(void) {
    int intVar = 42;
    float floatVar = 3.1416f;
    char charVar = 'A';
    double doubleVar = 9.81;

    // 각 변수의 포인터 선언
    int* intPtr = &intVar;
    float* floatPtr = &floatVar;
    char* charPtr = &charVar;
    double* doublePtr = &doubleVar;

    // 출력
    printf("birthday 변수의 주소는 %p 입니다.\n", (void*)&intVar);

    printf("intVar 변수 값: %d, 주소: %p\n", intVar, (void*)&intVar);
    printf("floatVar 변수 값: %.4f, 주소: %p\n", floatVar, (void*)&floatVar);
    printf("charVar 변수 값: %c, 주소: %p\n", charVar, (void*)&charVar);
    printf("doubleVar 변수 값: %.2f, 주소: %p\n", doubleVar, (void*)&doubleVar);

    return 0;
}
