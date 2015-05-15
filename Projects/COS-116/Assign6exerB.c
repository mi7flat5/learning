#include <stdio.h>
#include<ctype.h>

#define LSIZE 81
#define ECHO(string) (printf("\nFrom the ECHO macro: %s\n",string));

int main ()
{
void getline(char []);
void charvalid(char*);
char check='z';
char macrotest[LSIZE];

while (check !='e')
   {
    printf("\nEnter a word or phrase: ");

    getline(macrotest);
    ECHO(macrotest);

    printf("\nPress enter to continue or enter e to exit. ");
    charvalid(&check);}

return 0;
}
void getline(char *uservalid)
{
/*This function gets character input from the keyboard and adds
it to an array of characters that is passed to it by the calling function*/
    int i=0;
    char c;
    while (i<(LSIZE-1)&& (c = getchar()) != '\n')//for some reason when enter is pressed it stores it in stdin
        {uservalid[i]=c;
        i++;
        }
        fflush(stdin); //I added this because I was getting extra newline characters causeing unpredictable or eratic behavior
        uservalid[i]='\0';
return;
}
void charvalid(char *userchar)
{
char uservalid[LSIZE];
/*This does the same thing as getline function but only asigns the first character entered by the user to the
character address passed by the callee*/
int i =0;
    while (i<(LSIZE-1)&& (uservalid[i++] = getchar()) != '\n')//for some reason when enter is pressed it stores it in stdin
        {uservalid[i]='\0';}

        *userchar=tolower(uservalid[0]);
        fflush(stdin);//I added this because I was getting extra newline characters causeing unpredictable or eratic behavior
return;
}
