//bù cho ngày 4
//this is day 5
//today is 24th June 2026

#include <stdio.h>


//chuong trinh kiem tra nam nhuan
//chuong trinh kiem tra so chan va so le
//chuong trinh kiem tra nam co world cup
//chuong trinh kiem tra so ngay trong thang

//chuong trinh kiem tra nam nhuan
int main(){
    int nam;
    printf("nhap 1 nam \n");
    scanf("%d", &nam);
    if((nam % 4 ) == 0){
        printf("nam nhuan do ba \n");
    }
    else{
        printf("nam do dau phai nam nhuan dau ba \n");

    }

   //chuong trinh kiem tra so chan va so le
    int num;
    printf("nhap 1 so di \n");
    scanf("%d", &num);
    if((num % 2) == 0){
        printf("cai do la so chan a ba \n");
    }
    else{
        printf("cai do la so le a ba \n");
    }

    //chuong trinh kiem tra nam co world cup
    int year;
    printf("nhap 1 nam di ba \n");
    scanf("%d", &year);

    if(year < 1930){
        printf("nam do chua co world cup ba oi \n");

    }
    else if((year % 2) == 0){
        printf("nam do co world cup a ba \n");
    }
    else if ((year % 2) != 0){
        printf("nam do khong co world cup nha ba \n");
    }

    //chuong trinh kiem tra so ngay trong 1 thang

    int month;

    printf("ghi 1 thang trong nam di ghi so a \n");
    scanf("%d", &month);

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        printf("thang %d co 31 ngay \n", month);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        printf("thang %d co 30 ngay \n", month);
    }
    else if (month == 2){
        printf("thang 2 co 28 hoac 29 ngay \n");
    }
    else if (month > 12 || month < 1){
        printf("lam gi co thang %d dau ba \n", month);
    }
}
