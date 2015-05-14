#include<stdio.h>
#include<math.h>
 int main()
 {

    void change(float, int*,int*,int*,int*);
    void display(float,int,int,int,int);
    char check ='y';
    float total=1.88;
    int quarters,dimes,nickles,pennies =0;

        change(total,&quarters,&dimes,&nickles,&pennies);
        display(total,quarters,dimes,nickles,pennies);

        total=.32;
        change(total,&quarters,&dimes,&nickles,&pennies);
        display(total,quarters,dimes,nickles,pennies);

      while(check!='n')
      {
            printf("\nHow many coins? enter $ amount: ");
            scanf("%f",&total);
            change(total,&quarters,&dimes,&nickles,&pennies);
            display(total,quarters,dimes,nickles,pennies);
                printf("\nEnter any character to continue or 'n' to exit ");
                scanf(" %c",&check);
                      }

 return 0;
 }
change(float total,int *quarters,int *dimes,int *nickles, int *pennies){
    /*I find this algorithm the simplest, and for my needs accurate,
    I would be curious to know how to make it more accurate beyond .00
    I chose 1000 here because very occasionally at 100, I would lose a pennie.
    for example @326.52 everything was accurate except 1 pennie short.
    at first I was using float variables and rounding them down with floor() but I would get some really wacky result
    once in a while. Is it safe to assign float total into int itotal here or should I be casting?
    */
        int itotal;
        itotal=total*1000;
            *quarters= itotal/250;
            *dimes= (itotal-*quarters*250)/100;
            *nickles=(itotal-*quarters*250-*dimes*100)/50;
            *pennies= (itotal-*quarters*250-*dimes*100-*nickles*50)/10;
    return 0;
}
display(float total, int quarters,int dimes,int nickles, int pennies)
{
printf("\nTotal: %.2f\nQuarters:%d\nDimes:%d\nNickles:%d\nPennies:%d\n ",total,quarters,dimes,nickles,pennies);
return 0;
}

