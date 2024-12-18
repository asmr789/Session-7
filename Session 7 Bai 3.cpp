#include <stdio.h>

int main() {
    int array[5] = {1, 3, 5, 10, 9}; 
    int khongco=0;
    
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) { 
        printf("Cac so chan trong mang la: %d \n", array[i]);
        khongco++;
        }
    }
    if(khongco == 0){
    	printf("Mang khong co so chan");
	}
    return 0;
}