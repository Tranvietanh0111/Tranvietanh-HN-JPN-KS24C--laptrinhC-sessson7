#include<stdio.h>
int main(){
	int a[5]={1,4,7,8,9};
	int max=a[0];
	int min=a[0];
	for(int i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("phan tu lon nhat trong mang la: %d\n",max);
    printf("phan tu nho nhat trong mang la: %d",min);
    return 0;
}
