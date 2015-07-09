#include<iostream>
#include<string>
#include<cctype>
#include <sstream>
using namespace std;

class Date
{
public:
    Date():day(25),month(2),year(1946){cout<<"Constructed with default constructor.\n";}
    Date(int d,int m,int y)
    {
        if (d>0 && d<32 &&(m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(y>1899&&y<2070))
            {day = d;
            month =m;
            year =y;}
        else if (d>0&& d<31 &&(m==4||m==6||m==9||m==11)&&(y>1899&&y<2070))
            {day = d;
            month =m;
            year =y;}
        else if (d>0&&d<29&&m==2 &&((y>1899&&y<2070)))
            {day = d;
            month =m;
            year = y;}
        else if (d==29 && m==2&&(y>1899&&y<2070) && leapyear(y))
            {day = d;
            month =m;
            year = y;}
        else
        {
                cout<<"invalid date, default date 2/25/1946 set. "<<'\n';
                day=25;
                month=2;
                year=1946;
        }
        cout<<"\nConstructed with overloaded constructor.\n";
    }
    void print()const
    {
        cout<<"The date is: "<<month<<"/"<<day<<"/"<<year<<'\n';
    }


private:
    int day,month,year;
     bool leapyear(int y)const
    {
        if ((y%4==0&&y%100!=0))
            {cout<<"\nA LEAP DAY! \n";
            return true;}
        else if (y%100==0&&y%400==0)
            {cout<<"\nA LEAP DAY! \n";
            return true;}
        else
            return false;
    }
};
int main()
{
    Date d1;
    d1.print();
    string UserIn ="";
    int day,month,year;

   while(1)
    {cout<<"\nEnter month: ";
    getline(cin,UserIn);
    stringstream ValidMonth(UserIn);
    ValidMonth >> month;

    cout<<"\nEnter Day: ";
    getline(cin,UserIn);
    stringstream ValidDay(UserIn);
    ValidDay >> day;

    cout<<"\nEnter year: ";
    getline(cin,UserIn);
    stringstream ValidYear(UserIn);
    ValidYear >> year;

    Date d2(day, month,year);
    d2.print();
    }


return 0;
}
