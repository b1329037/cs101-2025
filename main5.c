
#include <stdio.h>

void reverseArray(char a[]) {
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
    
        char temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }
}

int main() {
    char a[] = "Hello";
    printf("原始字串: %s\n", a);
    reverseArray(a);
    printf("交換後: %s\n", a);
    return 0;
}

