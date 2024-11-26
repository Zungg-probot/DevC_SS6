#include<stdio.h>

int main(){
	int a,b,c;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	printf("Nhap so c: ");
	scanf("%d",&c);
	int n = a*a*a + b*b*b + c*c*c;
	if(n > 1000 || n < 99){
		printf("Khong hop le");
	}else{
		printf("so %d la 1 so armstrong", n);
	}
}
