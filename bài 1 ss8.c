#include <stdio.h>

int main() {
    int n, i;
    

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    

    int arr[n];
    printf("Nhap gi� tri c�c phan tu cua mang:\n");
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
    
    // In ra gi� tr? l?n nh?t v� nh? nh?t
    printf("Gi� tr? l?n nh?t trong m?ng: %d\n", max);
    printf("Gi� tr? nh? nh?t trong m?ng: %d\n", min);
    
    return 0;
}

