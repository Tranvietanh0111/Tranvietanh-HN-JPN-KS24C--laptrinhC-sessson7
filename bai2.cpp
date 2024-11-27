#include<stdio.h>
int main(){
	int a[5];
	for(int i=0 ; i<5; i++){
		printf("nhap phan tu a[%d] cua mang " , i);
		scanf("%d", &a[i]);
	}
	printf("\mang gom cac phan tu:");
    for(int i=0 ; i<5; i++){
		printf(" %d" , a[i]);
		
	}
	return 0; 
}
