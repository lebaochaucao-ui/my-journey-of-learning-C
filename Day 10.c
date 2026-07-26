#include <stdio.h>
//i'm sorry for not posting my works on github for almost a month....
//maybe I can't write code for everyday,but i'll try my best!
//this is my day 10
//program writen abt finding the x ig


int type;
int a,b,x;

void choose(){

    printf("Chuong trinh tim x nha moi nguoi \n");
    printf("(no la so nguyen)\n");

    printf("1.tim x kieu dau + (thieu so bi cong) \n");
    printf("2.tim x kieu dau + (thieu so cong) \n");
    printf("3.tim x kieu dau + (thieu dap an) \n");

    printf("4.tim x kieu dau - (thieu so bi tru) \n");
    printf("5.tim x kieu dau - (thieu so tru) \n");
    printf("6.tim x kieu dau - (thieu dap an) \n");

    printf("7.tim x kieu dau * (thieu so bi nhan) \n");
    printf("8.tim x kieu dau * (thieu so nhan) \n");
    printf("9.tim x kieu dau * (thieu dap an) \n");

    printf("10.tim x kieu dau / (thieu so bi chia) \n");
    printf("11.tim x kieu dau / (thieu so chia) \n");
    printf("12.tim x kieu dau / (thieu dap an) \n");

    scanf("%d", &type);
}

int main(){
    choose();

    while (type >= 1 && type <= 12) {
        switch (type){
            //+
            case 1: //tim so bi cong (x - b)
                a = 0;
                b = 0;
                x = 0;

                printf("nhap so cong \n");
                scanf("%d", &b);
                printf("nhap dap an \n");
                scanf("%d", &x);
                a = x - b;
                printf("so bi cong la %d \n", a);
                choose();
                break;

            case 2: //tim so cong (x - a)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so bi cong \n");
                scanf("%d", &a);
                printf("nhap dap an \n");
                scanf("%d", &x);
                b = x - a;
                printf("so cong la %d \n", b);
                choose();
                break;

            case 3: // tim dap an (a+b)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so bi cong \n");
                scanf("%d", &a);
                printf("nhap so cong \n");
                scanf("%d", &b);
                x = a + b;
                printf("dap an la %d \n", x);
                choose();
                break;

                //-

            case 4: //tim so bi tru (x + b)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so tru \n");
                scanf("%d", &b);
                printf("nhap dap an \n");
                scanf("%d", &x);
                a = x + b;
                printf("so bi tru la %d \n", a);
                choose();
                break;

            case 5: //tim so tru (a - x)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so bi tru \n");
                scanf("%d", &a);
                printf("nhap dap an \n");
                scanf("%d", &x);
                b = a - x;
                printf("so tru la %d \n", b);
                choose();
                break;

            case 6: // tim dap an (a-b)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so bi tru \n");
                scanf("%d", &a);
                printf("nhap so tru \n");
                scanf("%d", &b);
                x = a - b;
                printf("dap an la %d \n", x);
                choose();
                break;

            //*

            case 7: //tim so bi nhan (x / b)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so nhan \n");
                scanf("%d", &b);
                printf("nhap dap an \n");
                scanf("%d", &x);
                a = x / b;
                printf("so bi nhan la %d \n", a);
                choose();
                break;

            case 8: //tim so nhan (x / a)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so bi nhan \n");
                scanf("%d", &a);
                printf("nhap dap an \n");
                scanf("%d", &x);
                b = x / a;
                printf("so nhan la %d \n", b);
                choose();
                break;

            case 9: // tim dap an (a.b)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so bi nhan \n");
                scanf("%d", &a);
                printf("nhap so nhan \n");
                scanf("%d", &b);
                x = a * b;
                printf("dap an la %d \n", x);
                choose();
                break;


            // /

            case 10: //tim so bi chia (x * b)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so chia \n");
                scanf("%d", &b);
                printf("nhap dap an \n");
                scanf("%d", &x);
                a = x * b;
                printf("so bi chia la %d \n", a);
                choose();
                break;

            case 11: //tim so chia (a / x)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so bi chia \n");
                scanf("%d", &a);
                printf("nhap dap an \n");
                scanf("%d", &x);
                b = a / x;
                printf("so chia la %d \n", b);
                choose();
                break;

            case 12: // tim dap an (a/b)
                a = 0;
                b = 0;
                x = 0;
                printf("nhap so bi chia \n");
                scanf("%d", &a);
                printf("nhap so chia \n");
                scanf("%d", &b);
                x = a / b;
                printf("dap an la %d \n ", x);
                choose();
                break;


        default :
            printf("vo nghiem i  guess \n");




    }
}

    return 0;

}
