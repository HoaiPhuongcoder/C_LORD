#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		printf("Nhap vao phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		printf("phan tu thu %d: %d \n", i + 1, a[i]);
	}
	return 0;
}
void swap(int a[], int n){
	for (int i = 0;  i <= n / 2; i++){
		int tmp = a[i];
		a[i] = a[n -1 -i];
		a[n - 1 - i] = tmp; 
	}
	printf("\n mang dao nguoc la: ");
	for(int i = 0; i < n; i++){
		printf("%d \t", a[i]);
	}
}