#include<stdio.h>
#include<stdlib.h>
int main() {
	double num;
	while (scanf("%lf", &num) != EOF) {
		int count = 1;
		double sum = 0;
		while (count <= num) {
			double ans = -1;
			if ((count + 1) % 2 == 0) {
				ans = 1;
			}
			sum += ( ans / (2 * count - 1));
			count++;
		}
		printf("%.3lf\n", sum);
	}
	return 0;
}
