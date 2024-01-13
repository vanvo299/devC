#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void Nhap(char c[][100], int n)
{
	printf("Nhap day: ");
	for (int i = 0; i < n; i++) {
		scanf("%s", &c[i]);
	}
}
void Xuat(char c[][100], int n)
{
	printf("Day sau khi nhap la: ");
	for (int i = 0; i < n; i++) {
		printf("%s ", c[i]);
	}
}
int KT_so_nguyen(char *str)
{
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '.') {
			return 0;
		}
	} return 1;
}
int KT_so_hoan_hao(long m)
{
	long Tong_uoc = 0;
	for (int i = 1; i < m; i++) {
		if (m % i == 0) {
			Tong_uoc += i;
		}
	} 
	if (Tong_uoc == m) {
		return 1;
	} return 0;
}
int xoa_so_hoan_hao(char c[][100], int n)
{
	long j = 0;
	for (int i = 0; i < n; i++) {
	    long num = atoi(c[i]);
			if (!KT_so_nguyen(c[i]) || KT_so_nguyen(c[i]) && !KT_so_hoan_hao(num)) {
				strcpy(c[j], c[i]);
				j++;
		}
	} return j;
}
int main()
{
	char c[100][100];
	int n;
	printf("Nhap so luong phan tu co trong day: ");
	scanf("%d", &n);
    Nhap(c, n);
    Xuat(c, n);
    n = xoa_so_hoan_hao(c, n);
    printf("\nDay sau khi xoa so hoan hao la: ");
    for (int i = 0; i < n; i++) {
    	printf("%s ", c[i]);
	}
	return 0;
}
