/*#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include<string>
#include <fstream>
const int MAX_ITEMS = 15;
enum RelationType  {LESS, GREATER, EQUAL};

class ItemType 
{ 
public:
  ItemType();
  RelationType ComparedTo(ItemType) const;
  bool ItemType::operator <(const ItemType);
  bool ItemType::operator >(const ItemType);
  bool ItemType::operator <=(const ItemType);
  bool ItemType::operator >=(const ItemType);
  bool ItemType::operator ==(const ItemType);
  std::string GetValue();
  void Print() const;
  void Initialize(std::string);
private:
  std::string value;
  //int value;
};
#endif*/

