#include <iostream>
#include"BubbleSort.h"
#include"InsertionSort.h"
#include"SelectionSort.h"
using namespace std;
int main()
{
int thing[]={43,7,10,23,18,4,19,5,66,14};

InsertionSort(thing,10);
for (int i=0;i<10;++i)
    cout<<'\n'<<thing[i];
cout<<'\n';
}

