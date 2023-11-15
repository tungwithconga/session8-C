#include <stdio.h>

int main() {
    int n, addIndex, addValue, i;
    
    // Nh?p s? ph?n t? c?a m?ng
    printf("Nh?p s? ph?n tu cua m?ng: ");
    scanf("%d", &n);
    
    // Khai b�o v� nh?p gi� tr? cho m?ng 1 chi?u
    int arr[n + 1]; // M?ng m?i sau khi th�m ph?n t?
    printf("Nh?p gi� tr? c�c ph?n t? c?a m?ng:\n");
    for (i = 0; i < n; i++) {
        printf("Ph?n t? thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Nh?p gi� tr? c?n th�m v� ch? s? c?n ch�n
    printf("Nh?p gi� tr? c?n th�m: ");
    scanf("%d", &addValue);
    printf("Nh?p ch? s? c?n ch�n: ");
    scanf("%d", &addIndex);
    
    // Ki?m tra v� th�m gi� tr? v�o ch? s? addIndex
    if (addIndex >= 0 && addIndex <= n) {
        for (i = n; i >= addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        n++; // T�ng s? ph?n t? c?a m?ng l�n sau khi th�m
        printf("Mang sau khi ch�n gi� tr?:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Chi so ch�n kh�ng h?p l?!\n");
    }
    
    return 0;
}

