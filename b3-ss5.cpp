#include <stdio.h>

int main(){
	int n, i, tong=0 ;
	nhaplai: 
	printf("nhap so nguyen duong: ");
	scanf("%d", &n);
	if (n<0){
		printf("nhap lai so nguyen duong.\n");
		goto nhaplai; 
	} 
	for (i = 1; i <= n; i++){
		tong += i ; 
	}
	printf("tong tu 1 den %d la: %d\n", n, tong);  
	
	return 0; 
} 
