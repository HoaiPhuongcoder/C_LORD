#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	float* arr = malloc(7*4);
//	float* arr = malloc(28);
//	float* arr = malloc(7* sizeof(float));
	float* arr = calloc(7,4);
	arr[0] = 39;
	arr[1] = 79;
	arr[2] = 6868;
	arr[3] = 2204;
	printf("The arr array has: \n");
	for(int i = 0; i < 7; i++)
		printf("%.1f  ", arr[i]);
	int n;
	printf("\nnhap so phan tu cua mang: ");
	scanf("%d", &n);
	float vol[n];
	for (int i = 0; i < n; i++){
		printf("value of %d element: ", i + 1);
		scanf("%f", &vol[i]);
	}
	printf("The vol array has: \n");
	for(int i = 0; i < n; i++)
		printf("%.1f ", vol[i]);	

	return 0;
}