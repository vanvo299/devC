 #include <stdio.h>
 #include <math.h>
 #define max 500000 
 void tinh_2_mu_n(int a[], long n, long *m)
 {
 	*m = 1;
 	a[0] = 1;
 	unsigned long long tich, r = 0;
 	if (n > 0) {
 		for (long i = 1; i <= n; i++) {
 			for (long j = 0; j < *m; j++) {
 				tich = a[j] * 2 + r;
 				a[j] = tich % 10;
 				r = tich / 10;
 			 }
 			 while (r > 0) {
 			 	a[*m] = r % 10;
 			 	*m = *m + 1;
 			 	r = r / 10;
			  }
		 }
	 }
	 if (n < 0) {
	 	for (long i = 1; i <= -n; i++) {
	 		for (long j = 0; j < *m; j++) {
	 			tich = a[j] * 5 + r;
	 			a[j] = tich % 10;
	 			r = tich / 10;
			 }
			 while (r > 0) {
			 	a[*m] = r % 10;
			 	*m = *m + 1;
			 	r = r / 10;
			 }
		 }
	 }
 }
 void in_ra(int a[], long n, long m)
 {
 	if (n >= 0) {
 		for (int i = 0; i < m; i++) {
 			printf("%d", a[m - i - 1]);
		 }
	 }
	 if (n < 0) {
	 	printf("0.");
	 	for (int i = 0; i < m; i++) {
	 		printf("%d", a[m - i - 1]);
		 }
	 }
 }
 int main()
 {
 	long n, m;
 	int a[max];
 	printf("Nhap n: ");
 	scanf("%ld", &n);
 	printf("\n2^%ld = ", n);
 	tinh_2_mu_n(a, n, &m);
 	in_ra(a, n, m);
 	return 0;
 }
 
