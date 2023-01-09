#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int a;
	char season[12][10] = { "Winter", "Winter" , "Spring", "Spring", "Spring","Summer", "Summer", "Summer", "Autumn", "Autumn", "Autumn","Winter" };
	while (scanf("%d", &a) != EOF) {
		printf("%s\n", season[a - 1]);
	}
	return 0;
}
