#include<stdio.h>

int main(){
	int n;
	printf("Nhap size cua mang: ");
	scanf("%d",&n);
	int array[n];
	printf("Mang so kich thuong la %d\n",n);
	if (n > 0){
		for (int i = 0;i < n;i++){
			printf("Nhap phan tu thu %d trong mang:\n",i,array + i);
			scanf("%d",array + i);
		}
	}
	else{
		printf("size mang khong hop le");
	}
	
}