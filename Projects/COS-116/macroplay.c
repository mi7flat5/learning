#include <stdio.h>

#define ECHO(string) (printf("\n%s\n",string));

int main ()
{

char macrotest[]="\nTesting a macro is good clean fun!";

ECHO(macrotest);


return 0;
}
