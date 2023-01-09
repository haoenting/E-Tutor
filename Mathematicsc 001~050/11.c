#include<stdio.h>
#include<stdlib.h>
int main() {
	int num;
	scanf("%d", &num);
	printf("NT10=%d\n",num/10);
	num %= 10;
	printf("NT5=%d\n",num/5);
	num %= 5;
	printf("NT1=%d\n", num);
	return 0;
}
