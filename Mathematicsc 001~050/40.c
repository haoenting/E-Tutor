#include<stdio.h>
#include<stdlib.h>
int main() {
	int num, sum = 1;
	while (scanf("%d", &num) != EOF){
		printf("1 ");
		for (int count = 2; count <= num; count++) {
			printf("+ %d ", count);
			sum += count;
		}
		printf("= %d\n", sum);
		}
	return 0;
}
