#include <stdio.h>
#include <string.h>
int KT_doi_xung(char c[])
{
	for (int i = 0; i < strlen(c) / 2; i++) {
		if (c[i] != c[strlen(c) - i - 1])
		return 0;
	} return 1;
}
int main()
{
	char c[100];
	printf("Nhap so can kiem tra: ");
	scanf("%s", &c);
	if (KT_doi_xung(c)) {
		printf("\nSo da cho la so doi xung");
	} else printf("\nSo da cho khong phai la so doi xung");
	return 0;
}
