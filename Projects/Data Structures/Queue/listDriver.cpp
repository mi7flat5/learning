// Test driver
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>
#include "ItemType.h"
#include <Quetype.h>

using namespace std;

int GetLength(QueType*);

int main()
{
int Qlength;
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

        QueType alist;
        alist.Enqueue(apple);
       alist.Enqueue(eggplant);
        alist.Enqueue(kumquat);
        alist.Enqueue(grapefruit);
        alist.Enqueue(icecreambannana);
        alist.Enqueue(jabatacaba);

        Qlength = GetLength(&alist);
        cout <<"\nQueue Legths is: "<<Qlength<<"\n\n";


}
int GetLength(QueType *queue)
{
    //A poor alogorithm, but assuming I cant access QueType implementation details,
    //And I have to count from a client function, this is the least destructive
    //way I can think of.
    int count =0;
    ItemType tempItem;
    QueType tempqueue;
    while (!queue->IsEmpty())
    {
        queue->Dequeue(tempItem);
        tempqueue.Enqueue(tempItem);
        ++count;
    }
    for (int i=0;i<count;++i)
    {
        tempqueue.Dequeue(tempItem);
        queue->Enqueue(tempItem);

    }
    return count;
}

