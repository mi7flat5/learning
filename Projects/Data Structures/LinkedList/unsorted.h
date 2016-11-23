#include "ItemType.h" 
// File ItemType.h must be provided by the user of this class. 
//  ItemType.h must contain the following definitions: 
//  MAX_ITEMS:     the maximum number of items on the list 
//  ItemType:      the definition of the objects on the list 
//  RelationType:  {LESS, GREATER, EQUAL}
//  Member function ComparedTo(ItemType item) which returns 
//       LESS, if self "comes before" item 
//       GREATER, if self "comes after" item 
//       EQUAL, if self and item are the same 
struct NodeType;

class UnsortedType 
{
public:
  UnsortedType();

  ~UnsortedType();

  void MakeEmpty();

  bool IsFull() const;


  int GetLength() const;

  ItemType GetItem();
  ItemType GetItem(ItemType& item, bool& found);


  void PutItem(ItemType item);


  void DeleteItem(ItemType item);


  void ResetList();


  ItemType GetNextItem();

void PrintList();
void SplitLists(ItemType Item, UnsortedType& list1,UnsortedType& list2);

private:
  NodeType* listData;
  int length;
  NodeType* currentPos;
};

