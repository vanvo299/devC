#include <stdio.h>
int factorial(int m)
{
	int fact = 1;
	for (int i = 1; i <= m; i++) {
		fact *= i;
	} return fact;
}
void tam_giac_pascal(int n)
{
	for (int i = 0; i <= n; i++) {
		for (int k = 0; k < n - i; k++) {
			printf("  ");
		}
		for (int j = 0; j <= i; j++) {
			printf("%4d", factorial(i) / (factorial(i - j) * factorial(j)));
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("Nhap so dong cua tam giac pascal: ");
	scanf("%d", &n);
	tam_giac_pascal(n);
	return 0;
}
