#include<stdio.h>
#include<stdlib.h>
int main() {
	int num;
	while (scanf("%d", &num) != EOF) {
		printf("%d %d %d\n", num, num * num, num * num * num);
	}
	return 0;
}
