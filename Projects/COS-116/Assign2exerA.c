#include <stdio.h>
char analyse(char d);
char r='y';

    int main (void)
    {
        do{
            char c;
            printf("\nPlease Enter a  number 0-9: ");
            scanf(" %c",&c);
            analyse(c);

            printf("\nPress any key to analyse more numbers, or n to exit: ");
               char r = getc(stdin);


            }
            while((r = getc(stdin))!='n');


 return 0;
    }
    char analyse(char d)
    {
        if (isdigit(d)){
                switch(d){
                    case '0' : printf( "You Entered Zero\n" );
                            break;
                    case '1' : printf( "You Entered One\n" );
                            break;
                    case '2' : printf( "You Entered Two\n" );
                            break;
                    case '3' : printf( "You Entered Three\n" );
                            break;
                    case '4' : printf( "You Entered Four\n" );
                            break;
                    case '5' : printf( "You Entered Five\n" );
                            break;
                    case '6' : printf( "You Entered Six\n" );
                            break;
                    case '7' : printf( "You Entered Seven\n" );
                            break;
                    case '8' : printf( "You Entered Eight\n" );
                            break;
                    case '9' : printf( "You Entered Nine\n" );
                            break;}
                            }
                else{
                    printf("\nOops! I did't understand!");
                    }
            return 0;
     }
