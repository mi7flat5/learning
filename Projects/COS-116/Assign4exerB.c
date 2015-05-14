#include<stdio.h>
#include<string.h>

int main()
{
    void resturant(char menu[],int length);

    char message[]="What's for lunch?";
    int menulength = strlen(message);
    printf("\n");
    resturant(message,menulength);



        printf("\n");

return 0;
}
void resturant(char *menu,int menulength)
{
int i;
    printf("With *(pointer+i) notation: ");

        for (i=0;i<menulength;i++)
            {printf("%c",*(menu+i));}

            printf("\n");

    printf("\nWith *pointer++ notation: ");

        for (i=0;i<menulength;i++)
            {printf("%c",*menu++);}


return;
}
