#include <stdio.h>

int multi(int i, int j) {
    if (j == 1) {
        printf("%d*%d=%2d ", i, j, i*j);
        return 0;
    } else {
        multi(i, j - 1);
        printf("%d*%d=%2d ", i, j, i*j);
        return 0;
    }
}

int main() {
    for (int i = 1; i <= 9; i++) {
        multi(i, 9);  // 呼叫原本的遞迴函數印出每一列
        printf("\n"); // 每列之後換行
    }
    return 0;
}
