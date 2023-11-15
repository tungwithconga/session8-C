#include <stdio.h>

int main() {
    int n, deleteIndex, i;
    
    // Nh?p s? ph?n t? c?a m?ng
    printf("Nh?p s? ph?n t? c?a m?ng: ");
    scanf("%d", &n);
    
    // Khai báo và nh?p giá tr? cho m?ng 1 chi?u
    int arr[n];
    printf("Nh?p giá tr? các ph?n t? c?a m?ng:\n");
    for (i = 0; i < n; i++) {
        printf("Ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Nh?p ch? s? c?n xóa
    printf("Nh?p ch? s? c?n xóa: ");
    scanf("%d", &deleteIndex);
    
    // Ki?m tra và xóa ph?n t? t?i ch? s? deleteIndex
    if (deleteIndex >= 0 && deleteIndex < n) {
        for (i = deleteIndex; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Gi?m s? ph?n t? c?a m?ng ði sau khi xóa
        printf("M?ng sau khi xóa ph?n t?:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Ch? s? xóa không h?p l?!\n");
    }
    
    return 0;
}

