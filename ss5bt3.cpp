#include<stdio.h>
int main(){
	int a,i,total=0;
	printf("moi ban nhap so: ");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		total+=i;
	}
	printf("tong cac so tu 1 den %d la: %d",a,total);
	
}
