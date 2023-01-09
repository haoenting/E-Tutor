#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		int sec = a % 60;
		a /= 60;
		int min = a % 60;
		a /= 60;
		int hour = a % 24;
		a /= 24;
		printf("%d days\n", a);
		printf("%d hours\n", hour);
		printf("%d minutes\n", min);
		printf("%d seconds\n", sec);
	}
	return 0;
}
