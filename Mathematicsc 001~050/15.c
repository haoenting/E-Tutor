#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int bool = 1;
		if (a < 0 || a > 100)
			bool = 0;
		if (b < 0 || b > 100)
			bool = 0;
		if (bool == 1)
			printf("inside\n");
		else 
			printf("outside\n");
	}
	return 0;
}
