#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		int sum = 0;
		for (int count = 3; count <= a; count += 3) {
			sum += count;
		}
		printf("%d\n", sum);
	}
	return 0;
}
