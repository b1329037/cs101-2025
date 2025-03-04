#include <stdio.h>

void binaryToHex(char a[]) {
    int decimalValue = strtol(a, NULL, 2); 
    printf("16進位結果: %02X\n", decimalValue);
}

int main() {
    char a[] = "10001111"; 
    printf("原始二進位: %s\n", a);
    binaryToHex(a);
    return 0;
}
