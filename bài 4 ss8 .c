#include <stdio.h>

int main() {
    int n, addIndex, addValue, i;
    
    // Nh?p s? ph?n t? c?a m?ng
    printf("Nh?p s? ph?n tu cua m?ng: ");
    scanf("%d", &n);
    
    // Khai báo và nh?p giá tr? cho m?ng 1 chi?u
    int arr[n + 1]; // M?ng m?i sau khi thêm ph?n t?
    printf("Nh?p giá tr? các ph?n t? c?a m?ng:\n");
    for (i = 0; i < n; i++) {
        printf("Ph?n t? thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Nh?p giá tr? c?n thêm và ch? s? c?n chèn
    printf("Nh?p giá tr? c?n thêm: ");
    scanf("%d", &addValue);
    printf("Nh?p ch? s? c?n chèn: ");
    scanf("%d", &addIndex);
    
    // Ki?m tra và thêm giá tr? vào ch? s? addIndex
    if (addIndex >= 0 && addIndex <= n) {
        for (i = n; i >= addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        n++; // Tãng s? ph?n t? c?a m?ng lên sau khi thêm
        printf("Mang sau khi chèn giá tr?:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Chi so chèn không h?p l?!\n");
    }
    
    return 0;
}

