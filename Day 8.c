//bu cho ngay 8
//today is 29th june
//chuong trinh tinh uoc cua 1 so
#include <stdio.h>

int main(){
    int num;
    printf("type a number for me vro \n");
    scanf("%d", &num);
        for (int i = 1 ; i <= num ; i++){
            if(num % i == 0){
                printf("%d \n", i);
            }
        }
}
