#include<stdio.h>
#define LSIZE 81
#include<stdlib.h>
#include<string.h>
void getline(char []);
int main()
{
int i=0,j=0;
FILE *fileadd;
char filecontent[512];
char userline[512];
char loopend='\n';
//char check[]='\n';
fileadd = fopen("txtdataforprgm.sth","a");
while (j<5)
{
printf("\nenter 5 lines: ");

gets(userline);

fputs(userline,fileadd);
fputs(&loopend,fileadd);
fflush(stdin);
++j;
}

fclose(fileadd);
fileadd = fopen("txtdataforprgm.sth","r");

if (fileadd ==NULL)
    {printf("\nFailed to load file.");
    exit(1);}
rewind(fileadd);

char somechar;
printf("\n");
while(fgets(filecontent,512,fileadd))
    {++i;
    printf("%d %s",i,filecontent);
    //filecontent[i]=&somechar;
    }

fclose(fileadd);

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
