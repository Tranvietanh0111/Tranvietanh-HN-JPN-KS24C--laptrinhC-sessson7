#include<stdio.h>
int main(){
	int a[1000],n;
	printf("nhap n:");
	scanf("%d",&n);
	
	if(n<=0){
		printf("n phai lon hon 0");
		return 1;
	}
	else{
		for(int i=0 ; i<n; i++){
		printf("nhap phan tu a[%d] cua mang " , i);
		scanf("%d", &a[i]);
	    }
	
	}
	printf("cac phan tu cua mang la:");
    for(int i=0 ; i<n; i++){
		printf(" %d" , a[i]);
		
	}
	return 0;
}
