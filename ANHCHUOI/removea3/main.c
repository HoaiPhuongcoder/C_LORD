#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int p;
	scanf("%d", &p);
	printf("OUPUT: \n");
	for (int i = p - 1; i < n; i++)
		a[i] = a[i+1];
	for (int i = 0; i < n - 1; i ++){
		printf("%d\n", a[i]);
	}
	return 0;
}
