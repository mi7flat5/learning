#include<stdio.h>
#define LSIZE 81
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void getline(char []);
void charvalid(char*);
void stringscrub(char[]);
void scrubinput();
int main()
{
    char c;

 while (c!='n')
{
    c='\0';
    char date[LSIZE];
    char tempmonth[LSIZE];
    int tempday=0;
    void seperate(char[],char[], int *);

    void sortmonth(char[],int*);
    void sortdate(int*);

    tempmonth[0]='\0';
    date[0]='\0';
    //c[0]='\0';


    //printf("date is %s, tempmonth is %s",date,tempmonth);//here to show what is in array at this point
    printf("\nPlease enter a date, example: June/14 \n : ");


    getline(date);
    seperate(date,tempmonth,&tempday);
    //printf("\ndate is %s, \ntempmonth is %s",date,tempmonth);//here to show what is in array at this point
    sortdate(&tempday);
    sortmonth(tempmonth,&tempday);




    if (tempmonth[0]!='\0'&& tempday!=-1)
        printf("\nThe month you entered is %s, the date you entered is: %d", tempmonth, tempday);

        printf("\n");


    tempmonth[0]='\0';
    date[0]='\0';
    //c[0]='\0';

    printf("\nWould you like to enter another date? Any key to continue, or 'n' to exit: ");



    charvalid(&c);
    tempday=0;

    }

return 0;

}
void getline(char *uservalid)
{
    int i=0;
    char c;
    while (i<(LSIZE-1)&& (c = getchar()) != '\n')
        {uservalid[i]=c;
        i++;
        }
        uservalid[i]='\0';
return;
}
void seperate (char *date,char *tempmonth,int *tempday)
{
    int i=0,j=0,k=0;
    char toint[2];
    tempmonth[0]='\0';

       for (i=0;date[i];i++)
            {  if (isalpha(date[i]))
                {tempmonth[j]=date[i];
                ++j;}
                }

       for (i=0;date[i];i++)
              {if (isdigit(date[i]))
                {toint[k]=date[i];
                k++;}
                 }

        toint[k]='\0';
        tempmonth[j]='\0';
        *tempday = atoi(toint);

        toint[0]='\0';


return;
}
void sortmonth(char *tempmonth,int *tempday)
{
    int i=0,check=0;
    char April[]="April",May[]="May",June[]="June",July[]="July",August[]="August",
    September[]="September",October[]="October",November[]="November",December[]="December",
    January[]="January",February[]="February",March[]="March";

    for (i=0;tempmonth[i];i++)
    {tempmonth[i]=tolower(tempmonth[i]);}

    tempmonth[0]=toupper(tempmonth[0]);



    if (strcmp(tempmonth,April)==0||strcmp(tempmonth,September)==0||strcmp(tempmonth,November)==0||strcmp(tempmonth,June)==0)
          { ++check;
             while (*tempday==31)
                {printf("\nInvalid date range. ");
                *tempday=-1;}
          }


    if (strcmp(tempmonth,January)==0||strcmp(tempmonth,May)==0||strcmp(tempmonth,July)==0||strcmp(tempmonth,August)==0
        ||strcmp(tempmonth,October)==0||strcmp(tempmonth,December)==0||strcmp(tempmonth,March)==0)
           {++check;}

    if (strcmp(tempmonth,February)==0)
           {++check;
                while(*tempday ==31||*tempday==30||*tempday==29)
                    {if (*tempday==31||*tempday==30)
                            {printf("\nInvalid date range. ");}
                     if (*tempday==29)
                        {printf("\nNo leap days please. ");}
                        *tempday=-1;}
             }

    if(check==0)
        {tempmonth[0]='\0';
        printf("\nInvalid month, check spelling. ");}
        check=0;
return;
}
void sortdate(int *tempday)
{
    if (*tempday >31)
        {*tempday=-1;
           printf(" Invalid date range. ");}

    if (*tempday == 0)
        {*tempday=-1;
         printf(" No date entered. ");}
return;
}
void charvalid(char *userchar)
{
char uservalid[LSIZE];
int i =0;
    while (i<(LSIZE-1)&& (uservalid[i++] = getchar()) != '\n')
        {uservalid[i]='\0';}

        *userchar=tolower(uservalid[0]);
return;
}


