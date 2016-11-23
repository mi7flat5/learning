#ifndef HEAPQ
#define HEAPQ
#include "heap.h"
#include<iostream>
#include<string>
template<class ItemType>
class HeapQ
{
public:
  HeapQ(int);
  void PrintHeap()const;
  void Enqueue(ItemType newItem);

private:
  int length;
  Heap<ItemType> items;
  int maxItems;
};
template<class ItemType>
HeapQ<ItemType>::HeapQ(int max)
{
  maxItems = max;
  items.elements = new ItemType[max];
  length = 0;
}
template<class ItemType>
void HeapQ<ItemType>::Enqueue(ItemType newItem)
{
  if (length == maxItems)
    return;
  else
  {
    length++;
    items.elements[length-1] = newItem;
    items.ReheapUp(0, length-1);
   }
}
template<class ItemType>
void HeapQ<ItemType>::PrintHeap()const
{
    for (int i=0;i<length;++i)
    {
      std::cout<<"\n"<<i<<" "<<items.elements[i];
    }
    std::cout<<"\n\n";
}
template<>
void HeapQ<std::string>::PrintHeap()const
{
    for (int i=0;i<length;++i)
    {
     std::cout<<"\n"<<i<<" "<<items.elements[i];
    }
    std::cout<<"\n\n";
}
#endif // HEAPQ

