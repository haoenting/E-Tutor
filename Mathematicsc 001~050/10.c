#include<stdio.h>
#include<stdlib.h>
int main() {
	double a;
	while (scanf("%lf", &a) != EOF) {
		printf("%.1lf\n", a * 9 / 5 + 32.001);
	}
	return 0;
}
