#include<stdio.h>
#include<stdlib.h>
int main() {
	double num;
	while (scanf("%lf", &num) != EOF) {
		printf("%.1lf\n", num * 1.6 + 0.01);
	}
	return 0;
}
