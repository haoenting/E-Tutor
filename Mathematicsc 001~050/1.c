#include <stdio.h>
int main() {
	double U, D, T; 
	while (scanf("%lf %lf %lf", &U, &D, &T) != EOF) { // 輸入上底，下底，高
		printf("Trapezoid area:%.1lf\n", (U+D)*T/2); // 輸出面積(取到小數點後第一位)
	}
	return 0;
}
