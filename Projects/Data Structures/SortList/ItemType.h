// The following declarations and definitions go into file 
// ItemType.h. 
#include<string>
#include <fstream>
const int MAX_ITEMS = 15;
enum RelationType  {LESS, GREATER, EQUAL};

class ItemType 
{ 
public:
  ItemType();
  RelationType ComparedTo(ItemType) const;
  void Print() const;
  void Initialize(int);
  int GetValue();
private:
  int value;
};
 
