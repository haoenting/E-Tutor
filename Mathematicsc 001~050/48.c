#include<stdio.h>
#include<stdlib.h>
int f91(int n) {
	if (n > 100)
		n -= 10;
	else
		n = f91(f91(n + 11));
	return n;
}
int main() {
	int num, n;
	scanf("%d", &num);
	while (num > 0) {
		scanf("%d", &n);
		n = f91(n);
		printf("%d\n", n);
		num--;
	}
	return 0;
}
