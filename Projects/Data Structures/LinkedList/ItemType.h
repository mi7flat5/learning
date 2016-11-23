// The following declarations and definitions go into file 
// ItemType.h. 

#include <fstream>
const int MAX_ITEMS = 20;
enum RelationType  {LESS, GREATER, EQUAL};

class ItemType 
{ 
public:
  ItemType();
  RelationType ComparedTo(ItemType) const;
  void Print() const;
  void Initialize(std::string);
private:
  std::string value;
};
 
