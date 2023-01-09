#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		for (int count = 1; count <= a; count ++) {
			printf("%d*%d=%d\n", count, count, count * count);
		}
	}
	return 0;
}
