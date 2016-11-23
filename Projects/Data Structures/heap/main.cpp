#include <iostream>
#include"heapq.h"
#include<vector>
using namespace std;
int main()
{
   int queueSize;
   string tempString;

   cout<<"Please enter the number of elements you want to add to queue: ";
   cin>>queueSize;
   cin.clear();
   HeapQ<string> userQueue(queueSize);
   for (int i=0;i<queueSize;++i)
   {cout<<"\nEnter element #"<<i+1<<": ";
       cin.sync();
       getline(cin, tempString);
       userQueue.Enqueue(tempString);
    }
    cout<<"\nElements sorted by length\n";
    userQueue.PrintHeap();

        return 0;
}

