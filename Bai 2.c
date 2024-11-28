#include <stdio.h>

int main () {
	int array[3]={23,56,44};
	int i,search,n,found=0;
	n=sizeof(array)/sizeof(int);
	
	printf("Tim kiem phan tu trong mang");
	scanf("%d", &search);
	
	
	for (i=1;i<n;i++) {
		if (array [i]==search){
		printf("Vi tri phan tu nay la %d\n", i);
		found=1;
		break;
		
		}
	}
	if (found!=0) {
		printf("So nay khong co trong phan tu\n");	
	} 
	
	return 0;
}
