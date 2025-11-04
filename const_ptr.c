#include <stdio.h>

int main() {
    int x = 15;
    int y = 20;

    // p1: 일반 포인터 (주소는 &x)
    int* p1 = &x;
    printf("x: %d, y: %d, p1: %d\n", x, y, *p1);

    // p2: const int에 대한 포인터 (주소는 &y)
    const int* p2 = &y;
    printf("x: %d, y: %d, p2: %d\n", x, y, *p2);

    // p3: const 포인터 (주소는 &x)
    int* const p3 = &x;
    printf("x: %d, y: %d, p3: %d\n", x, y, *p3);

    return 0;
}