#include<stdio.h>
#include<stdlib.h>
int main() {
	int a,b;
	while (scanf("%d %d", &a, &b) != EOF) {
		if (a > b) {
			int temp = a;
			a = b;
			b = temp;
		}
		printf("%d\n", (a + b) * (b - a + 1)/2);
	}
	return 0;
}
