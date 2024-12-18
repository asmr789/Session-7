#include<stdio.h>

int main(){
	int n;
    printf("Nhap kich tuong cua mang: ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++) {
        int value;
        do {
            printf("Nhap phan tu thu %d: ", i );
            scanf("%d", &value);
            if (value % 2 == 0) {
                printf("Gia tri khong hop le Nhap lai so le\n");
            }
        } while (value % 2 == 0); 
        array[i] = value;
        printf("Cac phan tu trong mang la:\n");
    }
    	for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, array[i]);
    }
return 0;
}