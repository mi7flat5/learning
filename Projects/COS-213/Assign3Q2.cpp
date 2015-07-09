#include<iostream>
#include<string>
#include<cctype>
using namespace std;

class plot
{
public:
         plot():Length(7),Width(9){ cout<<"Plot constructed with default dimensions. \n";}//default constructor

         plot(int Dimension1, int Dimension2)//overloaded default constructor
        {
            if (Dimension1 >0 && Dimension2 >0)
                {Length = Dimension1;
                Width = Dimension2;
                cout<<"\nLength is set to: " <<Length<<", Width is set to: "<<Width<<'\n';
                }
            else
            {
                cout<<"\nInvalid dimensions, Length set to 7, Width set to 9 "<<'\n';
                Length = 7;
                Width =9;
            }
        }
        void area()const
        {
            cout<<"\nThe area of the plot is: "<<Length*Width<<'\n';
        }
        void perimeter()const
        {
             cout<<"The perimeter of the plot is: "<<2*(Length+Width)<<'\n';
        }
private:
    int Length;
    int Width;
};


 int main()
 {
    char userLoop = 'y';
    int UserLength;
    int UserWidth;

    plot p1;
    p1.area();
    p1.perimeter();


    while (userLoop !='n')
    {
    cout<<"\nEnter length of plot: ";
    cin>>UserLength;
    cout<<"\nEnter width of plot: ";
    cin>>UserWidth;
    plot p2(UserLength,UserWidth);
    p2.area();
    p2.perimeter();


    cout <<"\nWould you like to calculate another plot? Y/n: ";
    cin>>userLoop;
    userLoop = tolower(userLoop);
    }

     return 0;
 }
