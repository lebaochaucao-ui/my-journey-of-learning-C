#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//i'm boreddddd
//this is about atm!
//nvm this is my day 11!
//today is 27th July 2026
//leave a star on my github buddy

int enter;
int dgts = 0;
int balance = 0;//you can change your balance here to be rich
int Issigned = 0;
int deposit = 0;
char password[30] = "0";
char username[30] = "0";
char passwordCheck[30];
void serving();
void menu();
void choose();



void serving(){
    switch(dgts){
        case 1:{



        printf("how much do you want to give your poor bank account??! \n");
        printf("your fucking balance is $%d \n", balance);
        printf("type how much you want to send to your bank account! ($) \n");
        scanf("%d", &deposit);
        balance = balance + deposit;
        printf("your balance is now $%d \n", balance);
        menu();
        break;


        }
        case 2:{
            int moneySend = 0;
            char pplWhoGetMoney[30] ="0";
            printf("you have $%d \n", balance);
            printf("how much would you send? \n");
            scanf("%d", &moneySend);
            printf("who do you want to send $%d ? \n", moneySend);
            scanf(" %s", pplWhoGetMoney);
            balance = balance - moneySend;
            printf("you sent $%d for %s \n", moneySend, pplWhoGetMoney);
            printf("you now have $%d left \n", balance);
            menu();
            break;
        }

        case 3:
            system("cls");
            printf("you want to get out!? \n");
            printf("ofc get the fuck out!! \n");
            choose();
            break;



    }
}


void menu(){
    printf("have a bad day,%s \n", username);
    printf("welcome to this deadass bank how was your day buddy ? \n");
    printf("menu: \n");
    printf("1.deposit money \n");
    printf("2.send money \n");
    printf("3.log out \n");
    printf("what do you want me to serve ? \n");
    scanf("%d", &dgts);
    serving();
}


int SignIn(){
    switch(enter){
        case 1:{

            int IncorrectCount = 0;
            if(Issigned == 0){

                printf("who tf are you?? \n");
                printf("sign up first boi \n");
                choose();
                break;
            }
            else{
                printf("hello %s boii is that your bank account? \n", username);
                printf("enter ur password for %s account vro \n", username);
            scanf("%s", passwordCheck);

            while (strcmp(passwordCheck, password) != 0) {
                IncorrectCount++;

                if (IncorrectCount == 1) {
                    printf("incorrect password! \n");
                     scanf("%s", passwordCheck);
                } else if (IncorrectCount == 2) {
                    printf("What the hell??! \n");
                     scanf("%s", passwordCheck);
                } else if (IncorrectCount == 3) {
                    printf("who are you??! \n");
                     scanf("%s", passwordCheck);
                } else if (IncorrectCount >= 4) {
                    printf("never using this account again shut up go away! \n");
                    return 403;
                }

            }
                printf("welcome back!! \n");
                menu();

            }


        }

        case 2: //sign up
            if(Issigned == 0){
                printf("yo bro ur new?? \n");
                printf("alr buddy let create a new account >q< \n");
                printf("what would your user name be? \n");
                scanf("%s", username);
                printf("yo cool so %s is your user name now \n", username);
                printf("enter your password ! ( under 30 letters ,12345678 recommended >=D ) \n");
                scanf("%s", password);

                printf("enter it again \n");
                scanf("%s", passwordCheck);
                if (strcmp(passwordCheck, password) != 0) {
                    printf("get out you didn't even remembered the password your self! \n");
                    return 403;
}
                else{
                    printf("mou ikkai \n");
                    scanf("%s", passwordCheck);
            }

                if(strcmp(passwordCheck, password) != 0){
                    printf("get out boii XD \n");
                    return 403;
            }
                if(strcmp(passwordCheck, password) == 0){
                    printf("so your password is %s  \n", password);
                    system("cls");
                    Issigned = 1;
                    printf("your %s account is created now you can sign in! \n", username);

                    choose();
                    break;
            }



            }
            else{
                printf("you already have a bank account sign in vro \n");
                choose();
            }



            }
}






void choose(){


    printf("yo hop on bro welcome to this deadass bank > O < \n");
    printf("1.sign in \n");
    printf("2.sign up \n");
    scanf("%d", &enter);
    SignIn();
}
int main(){
    choose();

}

