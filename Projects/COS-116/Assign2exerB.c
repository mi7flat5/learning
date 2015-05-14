#include <stdio.h>
char x ='y';
    int main (void)
    {
      while (x!='n'){
        char c;
        printf("\nPlease enter a character: ");
        scanf(" %c", &c);
            if (isalpha(c)){
            printf("\nYou entered a letter");
                            }
            else if(isdigit(c))
                    printf("\nYou entered a number");
                else{
                    printf("\nYou entered a special character ");
                    }
        printf("/nEnter any Character to continue or 'n' to quit: ");
        scanf(" %c",&x);
                    }
                return 0;
        }
