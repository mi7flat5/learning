// The following definitions go into file ItemType.cpp. 
#include <fstream>
#include <iostream>
#include "ItemType.h"
#include<string>

ItemType::ItemType()
{ 
  value = -1;
}

RelationType ItemType::ComparedTo(ItemType otherItem) const 
{
  if (value < otherItem.value)
    return LESS;
  else if (value > otherItem.value)
    return GREATER;
  else return EQUAL;
}

void ItemType::Initialize(int name)
{
  value = name;
}

void ItemType::Print() const
// pre:  out has been opened.
// post: value has been sent to the stream out.
{
  std::cout << '\n' <<value;
}
int ItemType::GetValue()
{
    return value;
}
