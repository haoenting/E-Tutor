#include<stdio.h>
#include<stdlib.h>
int main() {
	double a, b;
	while (scanf("%lf %lf", &a, &b) != EOF) {
		double sum = a * a + b * b, len = 200;
		len *= len;
		if (sum <= len)
			printf("inside\n");
		else	printf("outside\n");
	}
	return 0;
}
