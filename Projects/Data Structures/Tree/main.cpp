#include<iostream>
#include"Tree.h"

#include<string>
using namespace std;
int main()
{
    Tree<string> s;

    int queueSize;
    string tempString;

    cout<<"Please enter the number of elements you want to add to Tree: ";
    cin>>queueSize;
    cin.clear();
    for (int i=0;i<queueSize;++i)
    {cout<<"\nEnter element #"<<i+1<<": ";
        cin.sync();
        getline(cin, tempString);
        s.PutItem(tempString);
     }
     cout<<"\nElements sorted alphabetically\n\n";


   s.Print();
    cout<<"\n\n";

return 0;
}
