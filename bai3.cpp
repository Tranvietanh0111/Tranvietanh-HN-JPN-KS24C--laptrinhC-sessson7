#include<stdio.h>
int main(){
	int a[5]={5,15,7,9,1};
	int test=0;
	printf("cac so chan trong mang la: ");
	for(int i=0;i<5;i++){
		if(a[i]%2==0){
			printf("%d ", a[i]);
			test=1;
		}
	}
	if(test==0){
		printf("mang khong chua so chan");
		
	}
	return 0;
}
