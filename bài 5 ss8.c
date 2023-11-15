#include <stdio.h>

int main() {
    int n, updateIndex, updateValue, i;
    
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
    
    // Nh?p giá tr? c?n c?p nh?t và ch? s? c?n c?p nh?t
    printf("Nh?p giá tr? c?n c?p nh?t: ");
    scanf("%d", &updateValue);
    printf("Nh?p ch? s? c?n c?p nh?t: ");
    scanf("%d", &updateIndex);
    
    // Ki?m tra và c?p nh?t giá tr? vào ch? s? updateIndex
    if (updateIndex >= 0 && updateIndex < n) {
        arr[updateIndex] = updateValue;
        printf("M?ng sau khi c?p nh?t giá tr?:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Ch? s? c?p nh?t không h?p l?!\n");
    }
    
    return 0;
}

