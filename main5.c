#include <stdio.h>

void print_sp(int i, int n) {
    for (int j = 0; j < n - i; j++) {
        printf(" ");
    }
}

void print_num(int i) {
    for (int j = 0; j < i; j++) {
        printf("%d ", i);
    }
}

int main() {
    int rows = 6;

    for (int i = 1; i <= rows; i++) {
        print_sp(i, rows);
        print_num(i);      
        printf("\n"); 
    }

    return 0;
}
