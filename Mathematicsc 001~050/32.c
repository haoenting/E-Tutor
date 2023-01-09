#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		int f = a;
		int st, nd , rd;
		st = a % 10;
		a /= 10;
		nd = a % 10;
		a /= 10;
		rd = a;
		if ((st * st * st + nd * nd * nd + rd * rd * rd) == f)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
