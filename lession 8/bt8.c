#include <stdio.h>

int main() {
	int arr[3][3]= {{1,2,3},{4, 5, 6}, {7, 8, 9}}, sum=0;
	
	 for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
     printf("\ncac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
     printf("\n:cac phan tu duong cheo phu: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][3 - 1 - i]);
        sum += arr[i][3 - 1 - i];
    }

    printf("\ntong cac phan tu tren duong cheo la: %d\n", sum);
    

    return 0;
}