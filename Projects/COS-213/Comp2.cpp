#include<iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    int score=-1;
    void getScore(int*);
    void printDecision(int);

    while(score !=0)
        {getScore(&score);
        cout<<"The entered score is: "<<score<<'\n';
        printDecision(score);

        cout <<'\n';
        }
  return 0;
}
void getScore(int *ScoreRef)
{
string UserIn;
*ScoreRef=-1;
    while (*ScoreRef!= 1 && *ScoreRef!= 2 && *ScoreRef!= 3 && *ScoreRef!= 4 && *ScoreRef!= 5 && *ScoreRef!= 0)
    {
        cout<<"Enter a valid score for borrower, 1,2,3,4 or 5, 0 to exit: ";

        getline(cin,UserIn);
        stringstream ValidInt(UserIn);
        ValidInt >> *ScoreRef;
            if (!isdigit(UserIn[0]))
            {*ScoreRef=-1;}


        cout <<'\n';
    }
}
void printDecision(int ScoreVal)
{

    switch (ScoreVal)
    {
        case 1 : cout<<"MORTGAUGE DENIED"<<'\n';
                break;
        case 2:  cout<<"MORTGAUGE DENIED"<<'\n';
                break;
        case 3:  cout<<"Provide mortgage at 7% interest rate."<<'\n';
                break;
        case 4:  cout<<"Provide mortgage at 6% interest rate."<<'\n';
                break;
        case 5:  cout<<"Provide mortgage at 5% interest rate."<<'\n';
                break;
        case 0 : cout<<"Goodbye."<<'\n';
                break;
    }

}
