#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		for (int count = 35; count <= a; count += 35) {
			if (count == 35)
				printf("35");
			else
				printf(" %d", count);
		}
		printf("\n");
	}
	return 0;
}
