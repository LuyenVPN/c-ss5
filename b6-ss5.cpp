#include <stdio.h>

int main(){
	int a, b, n;
	int tich, tong, hieu;
	float thuong; 
	printf("nhap 2 so bat ki: \n");
	scanf("%d %d", &a, &b); 
	while(1){
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &n);
		  if (n == 1){
			  tong= a + b;
			  printf("Tong la: %d \n", tong); 
		  } else if(n == 2){
		  	hieu= a - b;
			  printf("Hieu la: %d \n", hieu);
		  } else if(n == 3){
		  	tich= a * b;
			  printf("Tich la: %d \n", tich);
		  } else if(n == 4){
		  	 if (b == 0) {
                printf("Khong the chia cho 0\n");
            } else {
                thuong =a / b;
                printf("Thuong la: %.2f \n", thuong);  
		        }
		  } else if (n == 5){
		  	printf("Thoat chuong trinh.\n");
			      break;
		  } else if (n<1 || n>5){
		  	printf("Nhap lai lua chon tu 1 den 5.  \n"); 
		  } 
		
	}
	return 0; 
} 
