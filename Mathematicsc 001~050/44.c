#include<stdio.h>
#include<stdlib.h>
int main() {
	char a[2], b[7];
	while (scanf("%s %s", &a, &b) != EOF) {
		int sum = 0;
		for (int count = 0; count < 6; count++) {
			if(a[0] == b[count])
				if (a[1] == b[count + 1]) 
					sum++;
		}
		printf("%d\n", sum);
	}
	return 0;
}
