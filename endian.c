// endian.c
#include <stdio.h>

void check_endian() {
    // 첫 메모리 주소가 0x12이면 빅 엔디언이고,
    // 0x78이면 리틀 엔디언이다.
    unsigned int num = 0x12345678;        // 16진수 정수 (4바이트)
    unsigned char* byte_ptr = (unsigned char*)&num;

    // 모든 바이트의 주소와 값 출력
    for (int i = 0; i < sizeof(num); i++) {
        printf("%p\t0x%x\n", byte_ptr + i, *(byte_ptr + i));
    }

    // 엔디언 판별
    if (byte_ptr[0] == 0x12) {
        printf("\nThis is BIG-endian!\n");
    }
    else if (byte_ptr[0] == 0x78) {
        printf("\nThis is little_endian...\n");
    }
    else {
        printf("\nUnknown endian! ㅠㅠ\n");
    }
}

int main(void) {
    check_endian();
    return 0;
}