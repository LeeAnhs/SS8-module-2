#include <stdio.h>

int main () {
	int array[5];
	int i,n;
	n=sizeof(array)/sizeof(int);
	for (i=0;i < n; i++){
		printf ("Nhap phan tu cho mang:");
		scanf("%d", &array[i]);
	}
	
	for (i=n-1;i>=0;i--) {
		printf("%d\n", array[i]);
	}
	
	return 0;
	
}
