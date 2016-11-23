//The following definitions go into file ItemType.cpp.
/*
#include <iostream>
#include "ItemType.h"
#include<string>

ItemType::ItemType()
{ 
  value = "none";
}

RelationType ItemType::ComparedTo(ItemType otherItem) const 
{
  if (value < otherItem.value)
    return LESS;
  else if (value > otherItem.value)
    return GREATER;
  else return EQUAL;
}

void ItemType::Initialize(std::string name)
{
  value = name;
}

void ItemType::Print() const
{
  std::cout << '\n' <<value;
}
std::string ItemType::GetValue()
{
    return value;
}
 bool ItemType::operator <(const ItemType d)
 {
     if (this->value.length()<d.value.length())
         return true;
    else
     {return false;}
 }
 bool ItemType::operator >(const ItemType d)
 {
     if (this->value.length()>d.value.length())
         return true;
    else
     {return false;}
 }
 bool ItemType::operator <=(const ItemType d)
 {
     if (this->value.length()<=d.value.length())
         return true;
    else
     {return false;}
 }
 bool ItemType::operator >=(const ItemType d)
 {
     if (this->value.length()>=d.value.length())
         return true;
    else
     {return false;}
 }
 bool ItemType::operator ==(const ItemType d)
 {
     if (this->value.length()==d.value.length())
         return true;
    else
     {return false;}
 }

*/
