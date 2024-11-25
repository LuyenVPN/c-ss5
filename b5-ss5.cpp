#include <stdio.h>

int main(){
	int n,i,s ;
	 
	 for(n =1; n<10; n++){
	 	printf("bang cuu chuong %d la: \n",n);
	 	for(i=1; i<11; i++) {
	 			s= i * n; 
		 printf("%d x %d = %d \n", n, i, s);
	}
	 } 
	
	return 0; 
} 
