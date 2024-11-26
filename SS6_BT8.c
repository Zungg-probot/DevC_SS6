#include<stdio.h>
int main(){
    float i = 1,tiengoc, lai, thang, tienlai, tiennhan;

    printf("Nhap so tien ban dau: ");
    scanf("%f", &tiengoc);
    printf("Nhap lai suat: ");
    scanf("%f", &lai);
    printf("Nhap so thang: ");
    scanf("%f", &thang);
    
    int n;
    for(n=0;n<thang;n++){
    	i = i * (1 + lai / 100);
	}

    tiennhan = tiengoc * i;
    
    tienlai = tiennhan - tiengoc;

    printf("Tien lai: %.2f\n", tienlai);
    printf("Tien nhan duoc: %.2f\n", tiennhan);

    return 0;
}
