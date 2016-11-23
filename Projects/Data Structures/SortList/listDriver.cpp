/*// Test driver
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>

#include "sorted.h"

using namespace std;

SortedType Mergelist(SortedType list1,SortedType list2);

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

        SortedType alist;
        alist.PutItem(homony);
        alist.PutItem(eggplant);
        alist.PutItem(kumquat);
        alist.PutItem(grapefruit);
        alist.PutItem(icecreambannana);
        alist.PutItem(jabatacaba);
        SortedType blist;
        blist.PutItem(fruit);
        blist.PutItem(cherry);
        blist.PutItem(durien);
        blist.PutItem(apple);
        blist.PutItem(bannana);
    cout<<"\nList 1\n";
    blist.PrintList();
    cout<<"\n\nList 2\n";
    alist.PrintList();

    SortedType clist;
    SortedType dlist;

    clist = Mergelist(alist,blist);
    dlist.Merge(blist,alist);
    cout <<"\n\nMerged list from client function\n";
    clist.PrintList();
    cout<<"\n\nList from member merge method.\n";
    dlist.PrintList();
    cout<<"\n\n";
}
SortedType Mergelist(SortedType a,SortedType b)
{
    SortedType temp;
    a.ResetList();
    b.ResetList();
    for (int i =0;i<a.GetLength();++i)
    temp.PutItem(a.GetNextItem());
    for (int i =0;i<b.GetLength();++i)
    temp.PutItem(b.GetNextItem());

    return temp;

}
*/
