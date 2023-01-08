#include<stdio.h>
#include<stdlib.h>
int main() {
	int num;
	while (scanf("%d", &num) != EOF) {
		if (num > 31)
			printf("Value of more than 31\n");

		else
			printf("%d\n", 2 << num-1);
	}
	return 0;
}
