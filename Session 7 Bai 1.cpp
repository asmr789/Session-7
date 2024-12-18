#include <stdio.h>

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(array) / sizeof(int);
    printf("Do dai cua mang la: %d\n", length);
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("Phan tu thu %d: %d\n", i, array[i]);
    }
    return 0;
}