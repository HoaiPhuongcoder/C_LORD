#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("input time: ");
	int time;
	scanf("%d", &time);
	printf("times is: %d s", time);
	int h,p,s;
	h = time / 3600;
	p = (time % 3600) / 60;
	s = time % 60;
	printf("\n %d s is |%d gio|%d phut|%d giay|", time, h, p, s);
	return 0;
}
