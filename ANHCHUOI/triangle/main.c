#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j <=i; j++){
//			printf("* ");
//		}
//		printf("\n");
	tgvs();
	return 0;
	}
void tgvs(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j <=i; j++){
			printf("%d", j+1);
		}
		printf("\n");
	}
	}