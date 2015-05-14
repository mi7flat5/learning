
#include<stdio.h>
#include<math.h>

#define STAMP_COST 0.37

int main()
{
    int envelopes =19;
    float total=0;
    printf("\nHow many envelopes do you need to calculate postage for? ");
    scanf(" %d",&envelopes);
    total = round((STAMP_COST*envelopes)*100);
    printf("\nYour postage is: %.2f ",total/100);
    printf("\n");

return 0;
}
