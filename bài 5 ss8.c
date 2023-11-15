#include <stdio.h>

int main() {
    int n, updateIndex, updateValue, i;
    
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
    
    // Nh?p gi� tr? c?n c?p nh?t v� ch? s? c?n c?p nh?t
    printf("Nh?p gi� tr? c?n c?p nh?t: ");
    scanf("%d", &updateValue);
    printf("Nh?p ch? s? c?n c?p nh?t: ");
    scanf("%d", &updateIndex);
    
    // Ki?m tra v� c?p nh?t gi� tr? v�o ch? s? updateIndex
    if (updateIndex >= 0 && updateIndex < n) {
        arr[updateIndex] = updateValue;
        printf("M?ng sau khi c?p nh?t gi� tr?:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Ch? s? c?p nh?t kh�ng h?p l?!\n");
    }
    
    return 0;
}

