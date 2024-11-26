#include <stdio.h>

int main(){
    int i,num, tong = 0;
    for (i = 0; i < 5; i++){
        printf("Nhap so bat ky (5 so): ");
        scanf("%d", &num);
        if (num % 2 != 0) {
            tong = tong + num;
        }
    }
    printf("Tong cac so le da nhap la: %d\n", tong);
    return 0;
}
