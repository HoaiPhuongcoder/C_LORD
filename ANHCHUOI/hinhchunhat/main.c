#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i = 0; i <n; i++){
		for(int j = 0; j <m; j++){
			if(i == 0 || i == n - 1 || j == 0 || j == m - 1){
				printf("%d ",j);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}