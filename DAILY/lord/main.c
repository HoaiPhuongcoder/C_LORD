#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++ ){
			printf("%c", ('A'+ j));
		}
		printf("\n");
	}
	return 0;
}