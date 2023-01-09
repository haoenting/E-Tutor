#include<stdio.h>
#include<stdlib.h>
int main() {
	long long int a;
	while (scanf("%lld", &a) != EOF) {
		long long int sum = 1;
		for (long long int count = 1; count <= a; count++) {
			sum *= count;
		}
		printf("%lld\n", sum);
	}
	return 0;
}
