#include <stdio.h>

int main() {
    int n, i;
    

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    

    int arr[n];
    printf("Nhap giá tri các phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    

    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // In ra giá tr? l?n nh?t và nh? nh?t
    printf("Giá tr? l?n nh?t trong m?ng: %d\n", max);
    printf("Giá tr? nh? nh?t trong m?ng: %d\n", min);
    
    return 0;
}

