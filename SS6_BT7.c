#include<stdio.h>
int main(){
	int i,uc;
	printf("Nhap vao mot so bat ky: ");
	scanf("%d",&i);
	for(uc = i;uc > 0;uc--){
		if(i % uc == 0){
			printf("%d\n",uc);
		}
	}
	return 0;
}
