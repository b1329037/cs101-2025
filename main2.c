#include <stdio.h>

void runLengthDecode(char a[]) {
    int len = strlen(a);
    char decoded[100] = ""; 
    int pos = 0; 

    for (int i = 0; i < len; i += 2) {
        char ch = a[i];       
        int count = a[i + 1] - '0'; 

        for (int j = 0; j < count; j++) {
            decoded[pos++] = ch; 
        }
    }
    decoded[pos] = '\0'; 

    printf("解碼後的字串: %s\n", decoded);
}

int main() {
    char a[] = "A4B1C3f3"; 
    printf("原始 RLE 字串: %s\n", a);
    runLengthDecode(a);
    return 0;
}
