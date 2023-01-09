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
		int min = a[0] * a[0], mid = a[1] * a[1], max = a[2] * a[2];
		if (min + mid == max)
			printf("Right Triangle\n");
		else if (min + mid > max)
			printf("Acute Triangle\n");
		
		else if(a[0]+a[1]<=a[2])
			printf("Not Triangle\n");
		else
			printf("Obtuse Triangle\n");
	}
	return 0;
}
