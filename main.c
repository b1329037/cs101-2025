#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 69
#define NUM_COUNT 7

// 產生一組不重複的樂透號碼
void generateLottoNumbers(int numbers[]) {
    int used[MAX + 1] = {0}; // 用於檢查數字是否已被選中
    int count = 0;

    while (count < NUM_COUNT) {
        int num = (rand() % MAX) + MIN; // 產生 1 到 69 的數字
        if (!used[num]) {
            numbers[count++] = num;
            used[num] = 1;
        }
    }
}

// 交換函數，用於排序
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 選擇排序對數字排序
void sortNumbers(int numbers[]) {
    for (int i = 0; i < NUM_COUNT - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < NUM_COUNT; j++) {
            if (numbers[j] < numbers[minIdx]) {
                minIdx = j;
            }
        }
        swap(&numbers[i], &numbers[minIdx]);
    }
}

int main() {
    int n;
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);
    char dateStr[20];
    strftime(dateStr, sizeof(dateStr), "  %m %d %Y", tm_info);
    
    printf("請輸入要購買的樂透組數 (1-5): ");
    scanf("%d", &n);

    if (n < 1 || n > 5) {
        printf("輸入錯誤，請輸入 1 到 5 之間的數字。\n");
        return 1;
    }

    FILE *file = fopen("lotto.txt", "w");
    if (file == NULL) {
        printf("無法開啟文件。\n");
        return 1;
    }

    srand(2025); // 設定隨機種子為 2025
    fprintf(file, "    %s\n\n", dateStr);

    for (int i = 0; i < n; i++) {
        int numbers[NUM_COUNT];
        generateLottoNumbers(numbers);
        sortNumbers(numbers);

    
        fprintf(file, "[ %d ]: ", i + 1);
        for (int j = 0; j < NUM_COUNT; j++) {
            fprintf(file, "%02d ", numbers[j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    return 0;
}
