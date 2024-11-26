#include <stdio.h>

int main(){
    int matkhaudung = 123456;
    int matkhau;
    while(1){
    	printf("Nhap mat khau(6 chu so): ");
        scanf("%d", &matkhau);
        if(matkhau == matkhaudung){
        	printf("Mat khau dung!");
        	return 0;
		}
    }
}
