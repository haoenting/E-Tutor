#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, d;
	while (scanf("%d %d", &a, &b) != EOF) {
		scanf("%d %d", &c, &d);
		a = a * 60 + b;
		c = c * 60 + d;
		a = c - a;
		int sum = 0;
		if (a <= 120) {
			while (a >= 30) {
				sum += 30;
				a -= 30;
			}
		}
		else if (a <= 240) {
			sum += 120;
			a -= 120;
			while (a >= 30) {
				sum += 40;
				a -= 30;
			}
		}
		else {
			sum += 280;
			a -= 240;
			while (a >= 30) {
				sum += 60;
				a -= 30;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
