#include<stdio.h>
#define LSIZE 81
#include<stdlib.h>
#include<string.h>
void getline(char []);
void FileDisp(char *filename);
void FileEdit(char *fileadd);
int main()
{

char userfile[512];

printf("\nPlease enter file name that you want to add lines to: ");
getline(userfile);
FileEdit(&userfile);

printf("\n");
FileDisp(&userfile);


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
        fflush(stdin); //I added this because I was getting extra newline characters causing unpredictable or eratic behavior

        uservalid[i]='\0';

return;
}
void FileDisp(char *filename)
{
    FILE *f = fopen(filename, "r");
    if (f != NULL)
    {
        int c;
        int i=0;
        while ((c = fgetc(f)) != EOF)     // read character from file until EOF
        {

           putchar(c);

        }
        fclose(f);
    }
}
void FileEdit(char *fileadd)
{
    fileadd = fopen(fileadd,"w");

int i=0,j=0;

char userline[512];
int promptnum = 1;
char loopend='\n';
while (j<5)
{

printf("\nenter 5 lines,  line #%d: ",promptnum);
++promptnum;
gets(userline);

fputs(userline,fileadd);
fputc(loopend,fileadd);
fflush(stdin);
++j;
}

fclose(fileadd);

}
