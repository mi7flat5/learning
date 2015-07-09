#include<iostream>

using namespace std;

int main()
{
    int UserIn =0;
    int Count =0;
    int Total =0;

        cout << "Enter numbers to be averaged, end by entering -999"<<'\n';//I prefer using '\n' to endl. it is faster.

        while (UserIn != -999)
           {
            cout<<"Enter a positive integer: ";
            cin >> UserIn;
            if (UserIn >= 0)
            {
               Total = Total + UserIn;
               ++Count;
            }
            else if (UserIn != -999)
            {
                cout<< "Positive integers only! "<<'\n';
            }
           }

        cout<<"\nThe average of the numbers entered is: "<<Total/Count<<'\n';
        // this average will often be off due to integer truncation of decimal, but the assignment called for integers.

    return 0;

}
