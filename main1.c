#include <stdio.h>

void runLengthEncode(char a[]) {
    int count, i, len = strlen(a);

    for (i = 0; i < len; i++) {
        count = 1;
        while (i < len - 1 && a[i] == a[i + 1]) {
            count++;
            i++;
        }
        
        while (count > 9) {
            printf("%c9", a[i]); 
            count -= 9;          
        }
        printf("%c%d", a[i], count); 
    }
    printf("\n");
}

int main() {
    char a[] = "AABBBCCCCddd";
    printf("原始字串: %s\n", a);
    printf("RLE壓縮後: ");
    runLengthEncode(a);
    return 0;
}
