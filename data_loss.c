#include <stdio.h>

int main(void) {
   
    unsigned int x = 0x12345678;

    
    long lg = 2147483648L; 

    
    double xl = 123456789123.456789;

   
    printf("--- Unsigned Int (x) ---\n");
   
    printf("Uint (10진수): %u\n", x);

    
    printf("Uint -> short (2바이트): %hd\n", (short)x);

   
    printf("Uint -> char (1바이트): %hhd\n", (char)x);

   
    printf("\n--- Long (lg) ---\n");
  
    printf("Long: %ld\n", lg);

   
    printf("Long -> int: %d\n", (int)lg);

    printf("Long -> char: %hhd\n", (char)lg);

   
    printf("\n--- Double (xl) ---\n");
   
    printf("Dbl: %.6lf\n", xl);

  
    printf("Dbl -> long: %ld\n", (long)xl);

   
    printf("Dbl -> short: %hd\n", (short)xl);

    return 0;
}