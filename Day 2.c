//hi!!
//this is the second day of my journey of learning C
//today is Sunday 21st June 2026.

#include <stdio.h>
#include <string.h>

                                //today's program is about..project sekai..??,ig..
                //there's something wrong but English is not my first language so i don't understand what did compiler told me
int main(){
    int ln = 0;
    int mmj = 0;
    int vbs = 0;
    int wxs = 0;
    int n25 = 0;
    char ans[5] = {0};

    printf("hi,today i'll give you a group that fit you \n");
    printf("so,first question,do you love sticking with your childhood friends and create a band with them? \n");
    printf("write yes or no \n");
    scanf("%s", &ans);
    if(strcmp(ans, "yes") == 0){
        ln += 1;
    }
    else{
        ln = ln;
    }
    printf("next question,do you love your idol and want to create a group with them? \n");
    printf("write yes or no \n");
    scanf("%s", &ans);

    if(strcmp(ans, "yes") == 0){
        mmj += 1;
    }
    else{
        mmj = mmj;
    }

    printf("do you have a burning passion about singing and never want to give up? \n");
    printf("write yes or no \n");
    scanf("%s", &ans);

    if(strcmp(ans, "yes") == 0){
        vbs += 1;
    }
    else{
        vbs = vbs;
    }
    printf("fourth question,are you a person that usually in joy and love shows? \n");
    printf("write yes or no \n");
    scanf("%s", &ans);

    if(strcmp(ans, "yes") == 0){
        wxs += 1;
    }
    else{
        wxs = wxs;
    }
    printf("last question,if you have a sad friend, and a talent in composing,will you make music to save them? \n");
    printf("write yes or no \n");
    scanf("%s", &ans);

    if(strcmp(ans, "yes") == 0){
        n25 += 1;
    }
    else{
        n25 = n25;
    }

    printf("nope!,that's not the last one! \n");
    printf("five more questions,i promise! \n");
    printf("so..do you like a kind of place that the sky is full of star? \n");
    scanf("&s", &ans);

    if(strcmp(ans, "yes") == 0){
        ln += 1;
    }
    else{
        ln = ln;
    }

    printf("do you love a colorful stage ? \n");
    scanf("%s", &ans);

    if(strcmp(ans, "yes") == 0){
        mmj += 1;
    }
    else{
        mmj = mmj;
    }

    printf("does your hometown give you a good feeling? \n");
    scanf("%s", &ans);

    if(strcmp(ans, "yes") == 0){
        vbs += 1;
    }
    else{
        vbs = vbs;
    }

    printf("can a cheerful show light up your feelings right now? \n");
    scanf("%s", &ans);

    if(strcmp(ans, "yes") == 0){
        wxs += 1;
    }
    else{
        wxs = vbs;
    }

    printf("do you think an empty void always bring you calmness? \n");
    scanf("%s", &ans);

    if(strcmp(ans, "yes") == 0){
        n25 += 1;
    }
    else{
        n25 = n25;
    }

    printf("ok,so your final unit is.. \n");

    if(ln >= mmj && ln >= vbs && ln >= wxs && ln >= n25){
        printf("the unit that fit you is LEO/NEED with %d affections! \n", ln);
    }

    if(mmj >= ln && mmj >= vbs && mmj >= wxs && mmj >= n25){
        printf("i think MORE MORE JUMP fit you ,with %d affection!! \n", mmj);
    }

    if(vbs >= ln && vbs >= mmj && vbs >= wxs && vbs >= n25){
        printf("VIVID BAD SQUAD is a group that absolutely fit you with %d affections! \n", vbs);
    }

    if(wxs >= ln && wxs >= mmj && wxs >= vbs && wxs >= n25){
        printf("based on my question,i think it's WONDERLAND X SHOWTIME,with %d affection of your! \n", wxs);
    }
    if(n25 >= ln && n25 >= mmj && n25 >= wxs && n25 >= vbs){
        printf("heh,welcome to NIGHTCORD AT 25. \n", n25);
    }
    return 0;
}
