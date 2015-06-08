#include<stdio.h>
#define LSIZE 81
struct Music
{
    char Name[LSIZE];
    char Artist[LSIZE];
    int Number_of_songs;
    struct Music *nextadd;
};

void Display(struct Music*);

main()
{


    struct Music m1 = {"White Album","The Beatles",30};
    struct Music m2 = {"OU812","Van Halen",10};
    struct Music m3 = {"Awake","Dream Theater",11};
    struct Music *firstadd;

    firstadd = & m1;
    m1.nextadd = &m2;
    m2.nextadd = &m3;
    m3.nextadd = NULL;

    Display(firstadd);



    return 0;
}
void Display(struct Music *contents)
{

            printf("\nName of album        Name of artist         Number of songs \n");
            printf("___________________________________________________________\n\n");

            while (contents !=NULL)
                {printf("%-20s| %-20s |%d\n",contents->Name,contents->Artist,contents->Number_of_songs);
                 contents = contents->nextadd;
                }

            printf("___________________________________________________________\n\n");

return;
}
