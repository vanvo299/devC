#include <stdio.h>
#include <math.h>
void Nhap(int a, int b, int A[], int B[])
{
	printf("Nhap mang A: ");
	for (int i = 0; i < a; i++) {
		scanf("%d", &A[i]);
	}
	printf("Nhap mang B: ");
	for (int i = 0; i < b; i++) {
		scanf("%d", &B[i]);
	}
}
void Xuat(int a, int b, int A[], int B[])
{
	printf("Mang A sau khi nhap: ");
	for (int i = 0; i < a; i++) {
		printf("%d ", A[i]);
	}
	printf("\nMang B sau khi nhap: ");
	for (int i = 0; i < b; i++) {
		printf("%d ", B[i]);
	}
}
void hoanvi(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void noimang(int a, int b, int A[], int B[])
{
	for (int i = b; i < a + b; i++) {
		B[i] = 1e-6;
	}
	
	for (int i = 0; i < a + b; i++) {
		int maxa = 1e-6;
		int posa = 0;
		for (int k = 0; k < a; k++) {
			if (A[k] > maxa)
			{
				maxa = A[k];
				posa = k;
			}
		}
		int maxb = 1e-6;
		int posb = 0;
		for (int k = i; k < a + b; k++) {
			if (B[k] > maxb) {
				maxb = B[k];
				posb = k;
			}
		}
		if (maxa >= maxb) {
			hoanvi(&B[i], &A[posa]);
		} else hoanvi(&B[i], &B[posb]);
	}
	printf("\nMang sau khi noi la: ");
	for (int i = 0; i < a + b; i++) {
		printf("%d ", B[i]);
	}
}
int main()
{
	int a, b, A[100], B[100];
	printf("Nhap so luong phan tu cua mang A: "); scanf("%d", &a);
	printf("Nhap so luong phan tu cua mang B: "); scanf("%d", &b);
	Nhap(a, b, A, B);
	Xuat(a, b, A, B);
	noimang(a, b, A, B);

	return 0;
}
