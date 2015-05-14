#include <stdio.h>

    int main (void)
    {
        char c;
        printf("\nPlease Enter a  number 0-9: ");
        scanf(" %c", &c);
        if (isdigit(c)){
            switch(c){
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
        printf("Oops! I did't understand! ");
        }
        return 0;
        }
