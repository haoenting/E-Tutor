#include<stdio.h>
#include<stdlib.h>
int main() {
	double a, b;
	while (scanf("%lf %lf", &a, &b) != EOF) {
		double sum = 0;
		if (a <= 60) {
			sum = a * b;
		}
		else if (a > 120) {
			a -= 120;
			sum = 60 * b + 60 * b * 1.33 + a * b* 1.66;
		}
		else {
			a -= 60;
			sum = 60 * b + a * b * 1.33;
		}
		printf("%.1lf\n", sum + 0.01);
	}
	return 0;
}
