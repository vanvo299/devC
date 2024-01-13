#include <stdio.h>
#include <math.h>
void dem_so_0_01(long n1, long n2)
{
	long count = 0;
	for (int i = n1; i <= n2; i++) {
		if (i % 5 == 0 && i != 0) {
			long j = i ;
			while (j % 5 == 0 && j != 0) {
				count++;
				j /= 5;
			}
		}
	}
	printf("\nCo %ld chu so 0 tan cung cua tich cac so tu nhien tu %ld den %ld", count , n1, n2);
}
void dem_so_0_02(long a[], long n)
{
	long count_2 = 0, count_5 = 0;
	for (int i = 0; i < n; i++) {
		long num = a[i];
		while (num % 2 == 0 && num != 0) {
			count_2++;
			num /= 2;
		}
		while (num % 5 == 0 && num != 0) {
			count_5++;
			num /= 5;
		}
	}
	if (count_2 < count_5) {
		printf("\nCo %ld chu so 0 tan cung cua tich cac chu so co trong day", count_2);
	} else if(count_2 > count_5) {
		printf("\nCo %ld chu so 0 tan cung cua tich cac chu so co trong day", count_5);
	} else printf("\nCo %ld chu so 0 tan cung cua tich cac chu so co trong day", count_2);
}
int main()
{
	int truong_hop;
	printf("Nhap truong hop (chi duoc nhap 1 hoac 2): ");
	scanf("%d", &truong_hop);
	if (!(truong_hop == 1 || truong_hop == 2)) {
		printf("\nChi duoc nhap 1 hoac 2");
		return 1;
	}
	switch (truong_hop) {
		case 1: 
		long n1, n2;
		printf("Nhap n1: "); scanf("%ld", &n1);
		printf("Nhap n2: "); scanf("%ld", &n2);
		if (n1 == 0 || n2 == 0 || n1 * n2 <= 0) {
			printf("\nTich cac chu co tu nhien tu %ld den %ld bang 0, nen co 1 chu so 0 tan cung", n1, n2);
			return 1;
		}
		dem_so_0_01(n1, n2);
		break;
		
		case 2: 
		long a[100];
		long n;
		printf("Nhap so luong phan tu co trong day: ");
		scanf("%ld", &n);
		printf("Nhap day so: ");
		for (int i = 0; i < n; i++) {
			scanf("%ld", &a[i]);
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == 0) {
				printf("\nTich cac chu so bang 0, nen chi co 1 chu so 0 tan cung");
				return 1;
			}
		}
		dem_so_0_02(a, n);
		break;
	} 
	return 0;
}
