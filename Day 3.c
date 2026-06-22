#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//yesterday,i upload the file a bit late,...but,ok!,at least i still wrote something..
//today is the third day on my journey of learning C!
//today is 22nd June 2026.
//and today program is about ... guessing numbers..?

void ez();
void normal();
void hard();
void extreme();


int main(){

    int difi = 0; //1 = easy, 2= normal, 3= hard, 4= extreme

    printf("choose the difficulty ...,easy = 100 numbers,normal = 500 numbers and hard = 1000 numbers! \n");
    printf("write 1 for easy,2 for normal,and 3 for hard \n");
    scanf("%d", &difi);

    if(difi == 1){
        ez();
    }

    if(difi == 2){
        normal();
    }

    if(difi == 3){
        hard();
    }

    if(difi == 4){
        extreme();
    }
    return 0;
}

void ez(){

    srand(time(NULL));
    int eznum = rand() % 100 + 1;
    int ans = 0;
    int count = 0;

    printf("guess a number until it's the same as my secret number \n");
    scanf("%d", &ans);
    count += 1;
    while (ans != eznum) {
        scanf("%d", &ans);
        count += 1;

        if (ans > eznum) printf("Smaller");
        else if (ans < eznum) printf("Bigger");
        else printf("Correct, The number was %d\n after %d tries \n", eznum, count);

    }
}

void normal(){

    srand(time(NULL));
    int nornum = rand() % 500 + 1;
    int ans = 0;
    int count = 0;

    printf("guess a number until it's the same as my secret number \n");
    scanf("%d", &ans);
    count += 1;
    while (ans != nornum) {
        scanf("%d", &ans);
        count += 1;

        if (ans > nornum) printf("Smaller");
        else if (ans < nornum) printf("Bigger");
        else printf("Correct, The number was %d, after %d tries \n", nornum, count);
    }
}

void hard(){

    srand(time(NULL));
    int hadnum = rand() % 1000 + 1;
    int ans = 0;
    int count = 0;

    printf("guess a number until it's the same as my secret number \n");
    scanf("%d", &ans);
    count += 1;
    while (ans != hadnum) {
        scanf("%d", &ans);
        count += 1;

        if (ans > hadnum) printf("Smaller");
        else if (ans < hadnum) printf("Bigger");
        else printf("Correct, The number was %d, after %d tries", hadnum, count);


    }
}

void extreme(){

    srand(time(NULL));
    int hadnum = rand() % 10000 + 1;
    int ans = 0;
    int count = 0;

    printf("how did you know there's a hidden difficulty")
    printf("guess a number until it's the same as my secret number \n");
    scanf("%d", &ans);
    count += 1;
    while (ans != hadnum) {
        scanf("%d", &ans);
        count += 1;

        if (ans > hadnum) printf("Smaller");
        else if (ans < hadnum) printf("Bigger");
        else printf("Correct, The number was %d, after %d tries", hadnum, count);


    }
}

//this is even funnier than my day 2 lol
