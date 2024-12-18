#include <stdio.h>

int main() {
    int array[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", array + i);
    }
    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: %d\n", i, array[i]);
    }
    return 0;
}