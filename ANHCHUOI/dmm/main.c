#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j]= tmp;
			}
		}
	}
	printf("OUTPUT: \n");
	for (int i = 0; i < n; i++){
		if (a[i] % 2 != 0){
			printf("%d\n", a[i]);
		}
	}
	return 0;
}