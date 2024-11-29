#include <stdio.h>

int main () {
	int n=3,i;
	int array[3][3]={ 
	{2,3,4}, 
	{1,6,4}, 
	{7,4,1}
	};
	int sum=0;
	
	printf("Phan tu tren duong cheo phu la: ");
	for (i=0;i<n;i++){
		printf("%d", array[i][n-1-i]);
		sum += array[i][n-1-i];
		 
	} 
	printf("\nTong cac phan tu tren duong cheo la:%d",sum);
	return 0; 
		
	} 
	
