#include<stdio.h>
#include<stdlib.h>
int main() {
	int a,b;
	while (scanf("%d %d", &a, &b) != EOF) {
		if (a > 0) {
			if (b > 0)
				printf("1st Quadrant\n");
			else if (b < 0)
				printf("4th Quadrant\n");
			else printf("x-axis\n");
		}
		else if (a < 0) {
			if (b > 0)
				printf("2nd Quadrant\n");
			else if (b < 0)
				printf("3rd Quadrant\n");
			else printf("x-axis\n");
		}
		else {
			if (b != 0) {
				printf("y-axis\n");
			}
			else printf("Origin\n");
		}
	}
	return 0;
}
