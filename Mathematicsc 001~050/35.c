#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		int select = 0;
		if (a % 4 == 0)
			select = 1;
		if (a % 100 == 0)
			select = 0;
		if (a % 400 == 0)
			select = 1;
		if (select == 1)
			printf("Bissextile Year\n");
		else printf("Common Year\n");
	}
	return 0;
}
