#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[3];
	while (scanf("%d %d %d", &a[0], &a[1], &a[2]) != EOF) {
		if (a[0] > a[1]) {
			int temp = a[0];
			a[0] = a[1];
			a[1] = temp;
		}
		if (a[1] > a[2]) {
			int temp = a[2];
			a[2] = a[1];
			a[1] = temp;
		}
		if (a[0] > a[1]) {
			int temp = a[0];
			a[0] = a[1];
			a[1] = temp;
		}
		if (a[0] + a[1] <= a[2])
			printf("unfit\n");
		else printf("fit\n");
	}
	return 0;
}
