#include<stdio.h>

int main(){
	int month,year;
	int flagDay;
	printf("nhap nam: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    	flagDay = 1;
    } else {
    	flagDay = 0;
    }
    printf("Nhap thang: ");
    scanf("%d",&month);
    switch(month){
    	case 1:
    	case 3:
    	case 5:
    	case 7:
    	case 8:
    	case 10:
    	case 12:
    		printf("thang %d nam %d co 31 ngay",month,year);
    		break;
    	case 4:
    	case 6:
    	case 9:
    	case 11:
    		printf("thang %d nam %d co 30 ngay",month,year);
    		break;
    	case 2:
    		if(flagDay == 1){
    			printf("thang %d nam %d co 29 ngay",month,year);
			}else{
				printf("thang %d nam %d co 28 ngay",month,year);
			}
			break;
	}
}
