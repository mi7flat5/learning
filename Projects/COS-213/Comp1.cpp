/* The assignment calls for the for loop inside the function but also calls for a function that takes two arguments
I can't think of a way to do both, either I put the for loop inside a function with one argument "minimum" or the for loop outside the function with two
arguments "minimum" and the users input, I will code and append in a comment the alternative program, both have been compiled and yield the same result.*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    double minimum = INFINITY;
    double smaller(double);

    cout<<'\n';
    minimum = smaller(minimum);

    cout<<"\nThe smallest number entered is: "<<minimum<<'\n';

return 0;
}
double smaller(double x)
{
 double y =0;

  for (int i=0;i<15;++i)
        {cout<< "Enter number "<<setw(2)<<i+1<<": ";
         cin>>y;
          if (y<x)
              x=y;
        }

 return x;
}
/*
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    double minimum = INFINITY,UserNew =0;
    double smaller(double,double);

    cout<<'\n';

    for (int i=0;i<15;++i)
        {cout<< "Enter number "<<setw(2)<<i+1<<": ";
        cin>>UserNew;
        minimum = smaller(minimum, UserNew);
        }

    cout<<"\nThe smallest number entered is: "<<minimum<<'\n';

return 0;
}
double smaller(double x,double y)
{
    if (y<x) x=y;
    return x;
}
*/
