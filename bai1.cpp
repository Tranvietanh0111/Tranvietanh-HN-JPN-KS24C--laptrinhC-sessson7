#include<stdio.h>
int main(){
	int a[6] = {1,5,8,7,9,14};
	int length= sizeof(a) / sizeof(a[0]);
	printf("phan tu cua mang la:");
	for(int i=0 ; i<length; i++){
		printf("%d " , a[i]);
	}
	printf("\ndo dai cua mang la: %d",length);
	return 0; 
}
