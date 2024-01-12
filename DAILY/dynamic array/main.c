#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void printIntegerList();
void printIntegerListHEAP();
int main(int argc, char *argv[]) {
	printIntegerListHEAP();
	return 0;

}
void printIntegerList(){
	int a[] = {5, 10 , 23, 21, 31, 8};
	printf("the array has values of\n");
	for (int i = 0; i < 6; i++)
		printf("%d ", *(a + i));
		
}
void printIntegerListHEAP(){
	int* hari;
	int* p;
	p = (int* )malloc(24);
	p[0] = 5;
	p[1] = -10;
	p[2] = 15;
	p[3] = -20;
	p[4] = 25;
	p[5] = -30;
	for (int i = 0; i < 6; i++)
		printf("%d ", *(p + i));
		
}
