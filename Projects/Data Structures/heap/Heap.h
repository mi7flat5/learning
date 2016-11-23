#include<string>
template <class ItemType>
void swap(ItemType& one, ItemType& two);
template<class ItemType>
struct Heap
{
  void ReheapUp(int root, int bottom);
  ItemType* elements;
};
template <class ItemType>
void Swap(ItemType& one, ItemType& two)
{
  ItemType temp;
  temp = one;
  one= two;
  two = temp;
}  
template<>
void Heap<std::string>::ReheapUp(int root, int bottom)
{
    int parent;
     if (bottom > root)
     {
       parent = (bottom-1) / 2;
       if (elements[parent].size() < elements[bottom].size())
       {
         Swap(elements[parent], elements[bottom]);
         ReheapUp(root, parent);
       }
     }
}
template<class ItemType>
void Heap<ItemType>::ReheapUp(int root, int bottom)
{
    int parent;
     if (bottom > root)
     {
       parent = (bottom-1) / 2;
       if (elements[parent] < elements[bottom])
       {
         Swap(elements[parent], elements[bottom]);
         ReheapUp(root, parent);
       }
     }
}
