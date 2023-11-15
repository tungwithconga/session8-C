#include <stdio.h>

int main() {
    int n, deleteIndex, i;
    
    // Nh?p s? ph?n t? c?a m?ng
    printf("Nh?p s? ph?n t? c?a m?ng: ");
    scanf("%d", &n);
    
    // Khai b�o v� nh?p gi� tr? cho m?ng 1 chi?u
    int arr[n];
    printf("Nh?p gi� tr? c�c ph?n t? c?a m?ng:\n");
    for (i = 0; i < n; i++) {
        printf("Ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Nh?p ch? s? c?n x�a
    printf("Nh?p ch? s? c?n x�a: ");
    scanf("%d", &deleteIndex);
    
    // Ki?m tra v� x�a ph?n t? t?i ch? s? deleteIndex
    if (deleteIndex >= 0 && deleteIndex < n) {
        for (i = deleteIndex; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Gi?m s? ph?n t? c?a m?ng �i sau khi x�a
        printf("M?ng sau khi x�a ph?n t?:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Ch? s? x�a kh�ng h?p l?!\n");
    }
    
    return 0;
}

