#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMROW 5
#define NUMCOL 5


int main()
{
    int nums[NUMROW][NUMCOL];
    int populate(int nums[NUMROW][NUMCOL]);
    int display(int nums[NUMROW][NUMCOL]);
    int totals(int nums[NUMROW][NUMCOL]);

      populate(nums);
      display(nums);
      totals(nums);
      printf("\n");

return 0;
}
populate(int nums[NUMROW][NUMCOL])
{

    int i;
    int j;
    srand(time(NULL));

        for(i=0;i<NUMROW;i++)
            {
                for( j=0;j<NUMCOL;j++)
                    nums[i][j]=rand()%10+1;
            }


return 0;
}
display(int nums[NUMROW][NUMCOL])
{
    int i,j;

        for (i=0;i<NUMROW;i++)
                {printf("\n");
                    for (j=0;j<NUMCOL;j++)

                        printf("%2d |",nums[i][j]);
                }

return 0;
}
totals(int nums[NUMROW][NUMCOL])
{int i,j, rowtot,coltot;
printf("\n");

    printf("\n  Row totals : ");
        for(i=0;i<NUMROW;i++)
            {rowtot=0;
                for(j=0;j<NUMCOL;j++)
                    rowtot =rowtot+ nums[i][j];
                    printf(" %d",rowtot);
             }
    printf("\nColumn totals: ");
        for(j=0;j<NUMCOL;j++)
            { coltot=0;
                for(i=0;i<NUMROW;i++)
                    coltot =coltot+ nums[i][j];
                    printf(" %d",coltot);
            }
return 0;
}

