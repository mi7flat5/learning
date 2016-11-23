
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>

#include "sorted.h"

using namespace std;



int main()
{
    int userin;
    cout<<"\nPlease enter a number that you would like to search for: ";
    cin>>userin;

    bool found = false;
    SortedType numlist;
    ItemType one;
    one.Initialize(1);
    ItemType two;
    two.Initialize(2);

    ItemType three;
    three.Initialize(3);

    ItemType four;
    four.Initialize(4);
    ItemType five;
    five.Initialize(5);
    ItemType six;
    six.Initialize(6);
    ItemType seven;
    seven.Initialize(7);
    ItemType eight;
    eight.Initialize(8);
    numlist.PutItem(one);
    numlist.PutItem(two);
    numlist.PutItem(three);
    numlist.PutItem(four);
    numlist.PutItem(five);
    numlist.PutItem(six);
    numlist.PutItem(seven);
    numlist.PutItem(eight);
    numlist.ResetList();
    numlist.search(userin,found);

    if (found)
        cout<<"\nNumber found "<<'\n';
    else
    {cout<<"\nNumber not found "<<'\n';}


}
