#include <stdio.h>

int main() {
    int row, col, i, j;
    
    // Nh?p s? hàng và s? c?t c?a m?ng
    printf("Nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("Nh?p s? cot c?a m?ng: ");
    scanf("%d", &col);
    
    // Khai báo và nh?p giá tr? cho m?ng 2 chi?u
    float arr[row][col];
    printf("Nh?p giá tr? các phan tu cua mang %d x %d:\n", row, col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Ph?n t? [%d][%d]: ", i, j);
            scanf("%f", &arr[i][j]);
        }
    }
    
    // T?m giá tr? ch?n và tính t?ng các ph?n t? ch?n
    float sum = 0.0;
    printf("\nCác phan tu có giá tri chan:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if ((int)arr[i][j] % 2 == 0) {
                printf("%.2f ", arr[i][j]);
                sum += arr[i][j];
            }
        }
    }
    
    printf("\nT?ng các phan tu chan: %.2f\n", sum);
    
    return 0;
}

