#include<stdio.h>
#include<stdlib.h>
int main() {
	double a;
	while (scanf("%lf", &a) != EOF) {
		double b = 0.238;
		int time = 0;
		while (a >= 0) {
			a -= b;
			time++;
		}
		printf("%d\n", time);
	}
	return 0;
}
