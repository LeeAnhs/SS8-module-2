#include <stdio.h>

int main () {
	int n,i,j;
	int array [n][n];
	printf("Nhap mot so nguyen de tao mang 2 chieu:");
	scanf("%d", &n);
	
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			array [i][j]=0;
			 
		}
	}
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d", array[i][j]);
			 
			
	
		}
		printf("\n"); 
	}
	return 0; 
	
}
