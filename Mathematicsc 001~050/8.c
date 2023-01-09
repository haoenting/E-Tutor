#include<stdio.h>
#include<stdlib.h>
int main() {
	int a,b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int num = a + b;
		printf("%d\n", num * num);
	}
	return 0;
}
