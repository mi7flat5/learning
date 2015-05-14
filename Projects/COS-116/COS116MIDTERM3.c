#include<stdio.h>

 int main()
 {

    void calories(long int, int*,int*,int*,int*);
    void display(long int,int,int,int,int);
    char check ='y';
    long int total=0;
    int pizza, chips, apple, mustard;


      while(check!='n')
      {
            printf("\nHow many calories can you have?: ");
            scanf("%d",&total);
            calories(total,&pizza,&chips,&apple,&mustard);
            display(total,pizza,chips,apple,mustard);
                printf("\nPlan another meal? or press 'n' to exit ");
                scanf(" %c",&check);
                      }

 return 0;
 }
calories(long int total,int *pizza,int *apple,int *chips, int *mustard){


            *pizza= total/385;
            *chips= (total-*pizza*385)/170;
            *apple=(total-*pizza*385-*chips*170)/80;
            *mustard= (total-*pizza*385-*chips*170-*apple*80)/5;
    return 0;
}
display(long int total, int pizza,int apples,int chips, int mustard)
{
printf("\nCalories: %d\npizza:%d\nchips:%d\napples:%d\nmustard:%d\n ",total,pizza,chips,apples,mustard);
return 0;
}

