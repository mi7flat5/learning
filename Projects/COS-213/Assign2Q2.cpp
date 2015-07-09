#include<iostream>
#include<string>
#include <cstdlib>

using namespace std;

int main()
{
    int Grade=-1;

    void getScore(int*);
    void printGrade(int);


    getScore(&Grade);
    cout <<'\n';
    printGrade(Grade);

cout<<'\n';

return 0;
}
void getScore(int *grade)
{
    string GradeHold;

   while (1)
        {
        cout<<"Please enter a valid numerical grade: ";
        cin>> GradeHold;
        if (GradeHold.size() == 3 && isdigit(GradeHold[2])&& isdigit(GradeHold[1])&&isdigit(GradeHold[0]))
             *grade = atoi(GradeHold.c_str());

        else if(GradeHold.size() == 2 && isdigit(GradeHold[1])&& isdigit(GradeHold[0]))
        {
            *grade = atoi(GradeHold.c_str());

        }
        else if(GradeHold.size() == 1 && isdigit(GradeHold[0]))
        {
            *grade = atoi(GradeHold.c_str());

        }
        if (*grade <=100 && *grade >=0)
            break;
        }
  cout<<'\n'<< "The grade entered is: "<<*grade<<'\n';

}
void printGrade(int grade)
{

                    if (grade >=90&&grade<=100)
                    cout<<"You got an A";

                    if (grade >=80&&grade<90)
                    cout<<"You got a B";

                    if (grade >=70&&grade<80)
                    cout<<"You got a C";

                    if (grade >=60&&grade<=70)
                    cout<<"You got a D";

                    if (grade <60)
                    cout<<"You got an F";


return;
}
