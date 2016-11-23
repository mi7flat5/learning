
#include "unsorted.h"
#include<iostream>
UnsortedType::UnsortedType()
{
  length = 0;
}
bool UnsortedType::IsFull() const
{
  return (length == MAX_ITEMS);
}
int UnsortedType::GetLength() const
{
  return length;
}
ItemType UnsortedType::GetItem()
{
    return info[currentPos];
}
ItemType UnsortedType::GetItem(ItemType item,bool &found)

{
  bool moreToSearch;
  int location = 0;
  found = false;

  moreToSearch = (location < length);

  while (moreToSearch && !found) 
  {
    switch (item.ComparedTo(info[location]))
    {
      case LESS    : 
      case GREATER : location++;
                     moreToSearch = (location < length);
                     break;
      case EQUAL   : found = true;
                     item = info[location];
                     break;
    }
  }
  return item;
}
void UnsortedType::MakeEmpty()

{
  length = 0;
}
void UnsortedType::PutItem(ItemType item)

{
  info[length] = item;
  length++;
}
void UnsortedType::DeleteItem(ItemType item)

{
  int location = 0;

  while (item.ComparedTo(info[location]) != EQUAL)
    location++;

  info[location] = info[length - 1];
  length--;
}
void UnsortedType::ResetList()

{
  currentPos = -1;
}

ItemType UnsortedType::GetNextItem()
{
  currentPos++;
  return info[currentPos];
}
void UnsortedType::SplitLists(ItemType Item, UnsortedType& list1,UnsortedType& list2)
{
    if (this->GetLength())
    {


        this->currentPos = 0;
        for (int i =0;i<this->GetLength();++i)
        {
            if(Item.ComparedTo(this->GetItem())==GREATER)
                list1.PutItem(this->GetItem());
            if(Item.ComparedTo(this->GetItem())==EQUAL)
                list1.PutItem(this->GetItem());
            if(Item.ComparedTo(this->GetItem())==LESS)
                list2.PutItem(this->GetItem());

            ++currentPos;

        }

    }
}
void UnsortedType::PrintList()
{
    ItemType temp;
    if (this->GetLength())
    {
        this->ResetList();
        for (int i =0;i<this->GetLength();++i)
        {temp = this->GetNextItem();
            temp.Print();}
    }
}
