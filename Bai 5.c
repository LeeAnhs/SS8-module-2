#include <stdio.h>

int main () {
	int n,i;
	int array[3][3]={ 
	{2,3,4}, 
	{1,6,4}, 
	{7,4,1}
	};
	int sum=0;
	
	for(i=0;i<3;i++) {
		sum +=array[0][i];
		sum+=array[3-1][i]; 
		
	}
	for (i=1;i<3-1;i++){
		sum += array [i][0];
		sum += array[i][3-1];
	}
	printf("Tong cac phan tu tren duong bien la:%d\n",sum);
	return 0;
		
	} 
	
