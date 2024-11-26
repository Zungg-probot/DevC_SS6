#include <stdio.h>

int main(){
    int i,num, chan=0, le=0;
    for (i = 0; i < 5; i++){
        printf("Nhap so bat ky (5 so): ");
        scanf("%d", &num);
        if (num % 2 == 0){
            chan++;
        }else{
        	le++;
		}
    }
    printf("So chan co tong cong: %d\n", chan);
    printf("So le co tong cong: %d\n", le);
    return 0;
}
