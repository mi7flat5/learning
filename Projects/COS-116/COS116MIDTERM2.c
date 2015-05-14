#include<stdio.h>
#define WEEK_TEMPS 7
main()
{
    int temps[WEEK_TEMPS];
    void day(int);
    void advice(int);
    int i;

        for(int i=0;i<WEEK_TEMPS;++i)
            {printf("Enter temperature for ");
            day(i);
            scanf(" %d",&temps[i]);}

        for(i=0;i<WEEK_TEMPS;++i)
            {printf("\n");
            day(i);
            advice(temps[i]);}

            printf("\n");

return 0;
}

day(int in){

    switch (in)
    { case 0: printf("Monday: ");
            break;
      case 1: printf("Tuesday: ");
            break;
      case 2: printf("Wedsnday: ");
            break;
      case 3: printf("Thursday: ");
            break;
      case 4: printf("Friday: ");
            break;
      case 5: printf("Saturday: ");
            break;
      case 6: printf("Sunday: ");
            break;}

return 0;
}

advice(int in)
{
    if (in>100)
        {printf("TOO HOT!");}

    if (in>=90 && in<=100)
        {printf("It's a scorcer, turn on the air conditioning!");}

    if (in<90&&in>=80)
        {printf("Another hot day! Go for a swim!");}

    if (in<80&&in>=70)
        {printf("A good day to tend to your garden!");}

    if (in<70&&in>=60)
        {printf("Bring along a sweater today!");}

    if (in<=59)
        {printf("Stay inside and study C programming!");}

return 0;
}
