#include <stdio.h>
//bu cho ngay 7
//today is 29/6

//idk how to describe this

int main(){
    int num;
    int sn = 1;
    printf("type a number \n");
    scanf("%d", &num);
        for (sn = 1 ; sn <= 10 ; sn++){
            printf("%d x %d = %d \n", num, sn, num * sn);
        }

}
