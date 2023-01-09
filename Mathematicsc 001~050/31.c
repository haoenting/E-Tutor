#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		int sum = 0;
		for (int count = 6; count <= a; count += 6 ) {
			if (count % 12 != 0) {
				if (count % 6 == 0)
					sum += count;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
