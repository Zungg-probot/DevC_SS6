#include <stdio.h>

int main() {
    int n;
    int xetsonguyento = 1;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    if (n <= 1) {
        xetsonguyento = 0;
    } else if (n == 2) {
        xetsonguyento = 1;
    } else {
    	int i;
        for (i = 2; i * i <= n; i++){
            if (n % i == 0) {
                xetsonguyento = 0;
                break;
            }
        }
    }
    if (xetsonguyento) {
        printf("%d la so nguyen to\n", n);
    } else {
        printf("%d khong phai la so nguyen to\n", n);
    }

    return 0;
}
