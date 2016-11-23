#include"unsorted.h"
#include<iostream>
using namespace std;

int main()
{
    ItemType apple;
    apple.Initialize("apple");
    ItemType bannana;
     bannana.Initialize("bannana");
    ItemType cherry;
     cherry.Initialize("cherry");
    ItemType durien;
     durien.Initialize("durien");
    ItemType eggplant;
     eggplant.Initialize("eggplant");
    ItemType fruit;
     fruit.Initialize("fruit");
    ItemType grapefruit;
     grapefruit.Initialize("grapefruit");
    ItemType homony;
     homony.Initialize("homony");
    ItemType icecreambannana;
     icecreambannana.Initialize("icecream bannana");
    ItemType jabatacaba;
     jabatacaba.Initialize("jabatacaba");
    ItemType kumquat;
     kumquat.Initialize("kumquat");

    UnsortedType alist;
    UnsortedType list1;
    UnsortedType list2;

    alist.PutItem(apple);
    alist.PutItem(bannana);
    alist.PutItem(cherry);
    alist.PutItem(durien);
    alist.PutItem(eggplant);
    alist.PutItem(fruit);
    alist.PutItem(grapefruit);
    alist.PutItem(homony);
    alist.PutItem(icecreambannana);
    alist.PutItem(jabatacaba);
    alist.PutItem(kumquat);
   cout<<"ORIGIONAL LIST  "<<'\n';
    alist.PrintList();

    alist.SplitLists(fruit,list1,list2);
    cout<<"\nFIRST LIST  "<<'\n';
    list1.PrintList();


    cout<<"\nSECOND LIST  "<<'\n';
    list2.PrintList();
    cout<<'\n';




}
