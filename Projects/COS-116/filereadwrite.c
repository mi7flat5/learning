#include<stdio.h>
#define LSIZE 81
#include<stdlib.h>
#include<string.h>

void getline(char []);
FILE *FileOpen(char[LSIZE]);
int FileValidate(FILE*);
void FileWrite(FILE*);
void FileDisp(FILE*);

int main()
{
FILE *fileadd;
char userfile[LSIZE];

fileadd = FileOpen(userfile);

    if (FileValidate(fileadd)>0)
        {return 0;}


    FileWrite(&userfile);
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
        fflush(stdin); //I added this because I was getting extra newline characters causeing unpredictable or eratic behavior

        uservalid[i]='\0';

return;
}
int FileValidate(FILE *userfile)
{

    if (userfile ==NULL)
    {printf("\nFile not found.\n");
      return 1;}

   fclose(userfile);

return 0;
}
void FileWrite(FILE *userfile)
{
   int i=1;
   int j =0;
   char loopend ='\n';
   char userline[LSIZE];
    FILE *Fileadd;
   Fileadd = fopen(userfile,"w");
       while (j<5)
    {
    printf("\nEnter 5 lines, line #%d: ",i++);

    getline(userline);

    fputs(&userline,Fileadd);
    fputc(loopend,Fileadd);
    fflush(stdin);
    ++j;
    }
    fclose(Fileadd);
return;
}
FILE *FileOpen(char userfile[])
{

  FILE *Fileadd;

    printf("\nPlease enter the file name you wish to process: ");
        getline(userfile);
        Fileadd = fopen(userfile,"r");

  fclose(Fileadd);

return Fileadd;
}
void FileDisp(FILE *filename)
{
    FILE *Fileadd = fopen(filename, "r");
    int c;

        while ((c = fgetc(Fileadd)) != EOF)     // read character from file until EOF
        {
            putchar(c);
        }
        fclose(Fileadd);

return;
}
