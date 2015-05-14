#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct stdnt {
  char name[20];
  char grade;
  struct stdnt *nextadd;
};

struct stdnt *first;

void getline(char []);
void charvalid(char*);
int main()
{

first = NULL;

    void readls();
    void modifyent(struct stdnt*);
    void deleteent(struct stdnt*);

    void displayls(struct stdnt*);
    char cleanup(struct stdnt*);
    char menuchoice = '\0';

    while (menuchoice !='f')
    {   printf("\na. Create a linked list of students and grades.\nb. Insert a new student into the linked list.");
        printf("\nc. Modify an existing student in the linked list. \nd. Delete an existing student from the linked list.");
        printf("\ne. Display the linked list. \nf. Exit the program.\n");
        charvalid(&menuchoice);

        switch(menuchoice)
        {case 'a':
                if(first==NULL)
                {readls();}
                else
                   {printf("\nA list already exists.\n");}
                break;
        case 'b':
                if (first !=NULL)
                    {readls();}
                else
                    {printf("\nYou must first create a list.\n ");}
                break;
        case 'c':
                modifyent(first);
                break;
        case 'd':
                deleteent(first);
                break;
        case 'e':
                displayls(first);
                break;
        case 'f':
                menuchoice=cleanup(first);
        }
    }
return 0;

}
void charvalid(char *userchar)
{
char uservalid[10];
int i =0;
    while (i<(10-1)&& (uservalid[i++] = getchar()) != '\n')
        {uservalid[i]='\0';}
        fflush(stdin);
        *userchar=tolower(uservalid[0]);
return;
}
void readls()
{
void insertent(struct stdnt*);
struct stdnt tempstruc;
char noname[]= "NONAME";

while (1)
    {printf("\nEnter a name or enter 1 to exit: ");

    getline(tempstruc.name);
    tempstruc.name[0] = toupper(tempstruc.name[0]);
        if (tempstruc.name[0]=='1')
        {break;}
        if(tempstruc.name[0]=='\0')
            {printf("\nNo name recorded, Set as NONAME, use modify to change.\n");
                strcpy(tempstruc.name,noname);}
    printf("\nEnter letter grade. A,B,C,D or F :");
    charvalid(&tempstruc.grade);
    tempstruc.grade = toupper(tempstruc.grade);
    if (tempstruc.grade== '1'||tempstruc.grade== '\0' )
        {printf("\nNo grade recorded for %s. Grade recorded as N, use modify to change.\n ",tempstruc.name);
        tempstruc.grade='N';
        insertent(&tempstruc);
                break;}
    else if (tempstruc.grade == 'A'||tempstruc.grade == 'B'||tempstruc.grade == 'C'||tempstruc.grade == 'D'||tempstruc.grade == 'F')
        {insertent(&tempstruc);}
    else
        {printf("\nInvalid grade, set to N. Use Modify to change.\n ");
           tempstruc.grade='N';
           insertent(&tempstruc); }

    }
return;
}
void insertent(struct stdnt *tempstruct)
{
struct stdnt *alphasort(struct stdnt*);
struct stdnt *newadd,*curradd;

newadd =(struct stdnt*)malloc(sizeof(struct stdnt));
    if (newadd ==(struct stdnt*)NULL)
        {printf("\nCould not allocate memory. ");
        exit(1);}
    if (first == NULL)
    {newadd->nextadd=NULL;
    first = newadd;
    }
    else if (strcmp(tempstruct->name,first->name)<0)
       { newadd->nextadd = first;
        first = newadd;
       }
    else
    {curradd=alphasort(tempstruct);
    newadd->nextadd=curradd->nextadd;
    curradd->nextadd=newadd;
    }
strcpy(newadd->name,tempstruct->name);
newadd->grade =tempstruct->grade;

return;
}

void modifyent(struct stdnt *tempstruct)
{
void insertent(struct stdnt*);
struct stdnt *previous, *holdadd;
struct stdnt hold;
char name[20];
char check='a';
char grade;
int count=0;

    if(tempstruct == NULL)
        {printf("\nNo Students to Modify.\n");
        return;}

holdadd=(struct stdnt*)malloc(sizeof(struct stdnt));
    if (holdadd ==(struct stdnt*)NULL)
        {printf("\nCould not allocate memory. ");
        exit(1);}

    printf("\nPlease enter the name of the student you want to modify: ");
    getline(name);
    name[0]=toupper(name[0]);

do{
    if(strcmp(tempstruct->name,name)==0&&tempstruct==first)
        {   strcpy(holdadd->name,tempstruct->name);
             holdadd->grade =tempstruct->grade;
             previous=first;
             first =tempstruct->nextadd;
             free(previous);
             previous==NULL;
            tempstruct=NULL;
            free(tempstruct);
            break;}



    if(strcmp(tempstruct->name,name)!=0&& tempstruct->nextadd==NULL)
            {printf("\nStudent not found.\n");
            return;
            }
    if (strcmp(tempstruct->name,name)==0)
           {
            if(tempstruct->nextadd==NULL)
                {strcpy(holdadd->name,tempstruct->name);
                  holdadd->grade =tempstruct->grade;
                previous->nextadd=NULL;
                tempstruct==NULL;
                free(tempstruct);
                break;
                }
            else
            {strcpy(holdadd->name,tempstruct->name);
             holdadd->grade =tempstruct->grade;
             previous->nextadd=tempstruct->nextadd;
             tempstruct==NULL;
             free(tempstruct);
              break;}}
    if (tempstruct!=NULL)
        {previous =tempstruct;
        tempstruct=tempstruct->nextadd;}
}
        while(tempstruct!= NULL);
 name[0]='\0';

    printf("\nDo you want to change %s's the name? y/n :",holdadd->name);
    charvalid(&check);
    if (check== 'y'&&holdadd!=NULL)
      {  printf("\nEnter the new name:");
           getline(holdadd->name);
           ++count;
           holdadd->name[0]=toupper(holdadd->name[0]);
            check='\0';}

    printf("\nDo you want to change %s's grade? y/n: ",holdadd->name);
    charvalid(&check);

    if (check== 'y')
        { printf("\nEnter new grade:");
            charvalid(&grade);
            grade = toupper(grade);
            if (grade == 'A'||grade == 'B'||grade == 'C'||grade == 'D'||grade == 'F')
                {++count;
                holdadd->grade=grade;}
            else
                {printf("\nGrade not updated, A,B,C,D or F only.\n");}
                }


    insertent(holdadd);

    if (count>0)
        {printf("\n%s's record updated.\n",holdadd->name);}

    free(holdadd);
    holdadd=NULL;

return;
}

void deleteent(struct stdnt *tempstruct)
{
struct stdnt *previous;
int count =0;
char name[20];
    if(tempstruct == NULL)
        {printf("\nNo Students to delete.\n");
        return;}

    printf("\nPlease enter the name of the student you want to delete: ");
    getline(name);
    name[0]=toupper(name[0]);

    if(strcmp(tempstruct->name,name)==0)
        {if(tempstruct->nextadd==NULL)
        {first=NULL;
        free(first);
        }
        else
            {previous=first;
            first =tempstruct->nextadd;
            free(previous);
            }
        printf("\nRecord deleted.\n");
        return;}


    while(tempstruct!= NULL){
        if(strcmp(tempstruct->name,name)!=0&& tempstruct->nextadd==NULL)
            {printf("\nStudent not found.\n");
            break;
            }
        if (strcmp(tempstruct->name,name)==0)
           { if(tempstruct->nextadd==NULL)
                {previous->nextadd=NULL;
                free(tempstruct);
                count++;
                break;
                }
            else
            {previous->nextadd=tempstruct->nextadd;
                free(tempstruct);
                tempstruct=NULL;
                count++;
            }}
        if (tempstruct!=NULL)
        {previous =tempstruct;
        tempstruct=tempstruct->nextadd;}
        }

if (count>0)
    {printf("\nRecord deleted.\n");}

return;
}
void displayls(struct stdnt *contents)
{
        if (first==NULL)
            {printf("\nNo records to display.\n ");}
        else
            {printf("\n");
            while (contents !=NULL)
        {printf("%-20s| %c\n",contents->name,contents->grade);

         contents = contents->nextadd;}
         }
return;
}

struct stdnt *alphasort(struct stdnt *tempstruct)
{
struct stdnt *firstadd, *secondadd;
firstadd =first;
secondadd = firstadd->nextadd;
    if(secondadd==NULL)
    { return(firstadd);}
  while (1)
    {if (strcmp(tempstruct->name,secondadd->name)<0)
        { break;}
     else if(secondadd->nextadd==NULL)
       { firstadd=secondadd;
       break;
       }
     else
     {firstadd=secondadd;
     secondadd=firstadd->nextadd;
     }
    }
return(firstadd);
}
void getline(char *uservalid)
{
    int i=0;
    char c;
    while (i<(15-1)&& (c = getchar()) != '\n')
        {uservalid[i]=c;
        i++;
        }
        uservalid[i]='\0';
        fflush(stdin);
return;
}
char cleanup(struct stdnt *tempstruct)
{char cleanup='\0';
struct stdnt *previous;

    if (tempstruct==NULL)
        {cleanup='f';
        return (cleanup);}
while(tempstruct)
    {if (tempstruct->nextadd==NULL)
        {free(first);
        cleanup='f';
        printf("\nMemory released.\n ");
        return (cleanup);}
    if (tempstruct->nextadd!=NULL)
        {previous = tempstruct;
        tempstruct=tempstruct->nextadd;
        free(previous);}
    }

printf("\nError releasing memory, use CTRL+C.\n");
return(cleanup);
}
