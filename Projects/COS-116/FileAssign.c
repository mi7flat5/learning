#include<stdio.h>
#define LSIZE 81
#include<stdlib.h>
#include<string.h>
void getline(char []);
void FileDisp(char *filename);
void FileEdit(char *filename);

int main()
{

 char userfile[LSIZE];


 printf("\nPlease enter the file name you wish to process: ");
 getline(userfile);
 printf("\n");
    FileDisp(&userfile);

    FileEdit(&userfile);
    printf("\n");
    FileDisp(&userfile);
    printf("\n");

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
void FileDisp(char *filename)
{
    FILE *f = fopen(filename, "r");
    if (f != NULL)
    {
        int c;

        while ((c = fgetc(f)) != EOF)     // read character from file until EOF
        {
            putchar(c);
        }
        fclose(f);
    }
}
void FileEdit(char *filename)
{
 FILE *f = fopen(filename, "r");
 FILE *g = fopen("tmp.txt","w");
  if (f != NULL)
    {
        int c;

        while( (c = toupper(fgetc(f)) )!= EOF)     //read character from file as all upper case until EOF
        {
              fputc(c,g);                   // put character into temporary file
        }

        fclose(f);
        fclose(g);
FILE  *f =fopen (filename,"w");
FILE *g = fopen("tmp.txt","r");

     while ((c = fgetc(g)) != EOF) //iterate through tmp file
     {
         fputc(c,f);        // overwrite contents of user file with contents of tmp file
     }
      fclose(f);
      fclose(g);
    }
}
