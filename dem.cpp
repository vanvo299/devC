#include <stdio.h>
void dem(long num[])
{
	long count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == j) continue;
			else for (int k = 0; k < 4; k++) {
				if (i == k || j == k) continue;
				else for (int l = 0; l < 4; l++) {
					if (i == l || j ==l || k == l) continue;
					else {
						if (num[i] == 0) continue;
						else {
							printf("\n%d%d%d%d", num[i], num[j], num[k], num[l]);
							count++;
						}
					}
				}
			}
		}
	}
	printf("\nCo %ld so tu nhien co 4 chu so khac nhau", count);
}
int main()
{
	long a[4];
	printf("Nhap cac chu so tu nhien khac nhau:  ");
	for (int i = 0; i < 4; i++) {
		scanf("%ld", &a[i]);
		for (int k = 0; k < 4; k++) {
			if (a[k] > 10) {
				printf("Nhap lai");
				return 1;
			}
		}
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				printf("Vui long nhap cac so khac nahu, nhap lai");
				return 1;
			}
		}
	}
	dem(a);
	return 0;
}
