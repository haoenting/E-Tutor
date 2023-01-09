#include<stdio.h>
#include<stdlib.h>
int main() {
	int prime[100005], isPrime[100005], Ps = 0;
	for (int count = 2; count < 100003; count += 2) {
		prime[count] = 0;
		prime[count + 1] = 1;
	}
	prime[1] = 0;
	prime[2] = 1;
	prime[3] = 1, isPrime[Ps++] = 2;
		
	for (int count = 3; count <= 100003; count += 2) {
		if (prime[count] == 1) {
			isPrime[Ps++] = count;
			for (int count2 = 2; count * count2 <= 100005; count2++)
				prime[count * count2] = 0;
		}
	}

	int a;
	while (scanf("%d", &a) != EOF) {
		for (int count = 0; count < Ps; count++) {
			if (isPrime[count] >= a) {
				printf("%d\n", isPrime[count - 1]);
				break;
			}
				
		}
	}
	return 0;
}
