#include <stdio.h>

int main(){
	int n,i,s ;
	nhaplai: 
	printf("nhap so nguyen duong: ");
	scanf("%d", &n);
	if (n<1 || n>10){
		printf("nhap lai so nguyen duong tu 1 den 10.\n");
		goto nhaplai; 
	} 
	printf("bang cuu chuong %d la: \n",n); 
	 for(i=1; i<11 ; i++){
	 	s= i * n; 
		 printf("%d x %d = %d \n", n, i, s);
	 } 
	
	return 0; 
} 
