 #include <stdio.h>
 #include <math.h>
 void Nhap(float a[10][10], int n)
 {
 	printf("Nhap ma tran: \n");
 	for (int i = 0; i< n; i++) {
 		for (int j = 0; j < n; j++) {
 			printf("a[%d][%d] = ", i, j);
 			scanf("%f", &a[i][j]);
		 }
	 }
 }
 void Xuat(float a[10][10], int n)
 {
 	printf("\nMa tran sau khi nhap: \n");
 	for (int i = 0; i < n; i++) {
 		for (int j = 0; j < n; j++) {
 			printf("%5.0f", a[i][j]);
		 }
		 printf("\n");
	 }
 }
 void hoanvi(float *a, float *b)
 {
 	float temp = *a;
 	*a = *b;
 	*b = temp;
 }
 void cheo_chinh(float a[10][10], int n)
 {
 	for (int i = 0; i < n; i++) {
 		float max = a[i][0];
 		int pos = 0;
 		for (int j = 0; j < n; j++) {
 			if (a[i][j] > max) {
 				max = a[i][j];
 				pos = j;
			 }
		 }
		 hoanvi(&a[i][i], &a[i][pos]);
	 } 
	 printf("\nMa tran sau khi sap xep lai la: \n");
	 for (int i = 0; i < n; i++) {
	 	for (int j = 0; j < n; j++) {
	 	printf("%6.1f", a[i][j]);
	 }
	 printf("\n");
 }
}
 int main()
 {
 	int n;
 	printf("Nhap cap cua ma tran: ");
 	scanf("%d", &n);
 	float a[10][10];
 	Nhap(a,n);
 	Xuat(a, n);
 	cheo_chinh(a, n);
 	return 0;
 }
