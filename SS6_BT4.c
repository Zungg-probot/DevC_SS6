int main() {
    int a, b, c, delta;
    printf("Nhap vao gia tri a: ");
    scanf("%d", &a);
    printf("Nhap vao gia tri b: ");
    scanf("%d", &b);
    printf("Nhap vao gia tri c: ");
    scanf("%d", &c);
    if (a == 0){
        printf("Day khong phai phuong trinh bac hai\n");
    }else{
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            printf("phuong trinh co 2 nghiem phan biet\n");
        } else if (delta == 0){
            printf("phuong trinh co 1 nghiem kep\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    return 0;
}
