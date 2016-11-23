#include "ItemType.h"
// Header file for Sorted List ADT.  
struct NodeType;

class SortedType
{
public:
  SortedType();     // Class constructor	
  ~SortedType();    // Class destructor

  bool IsFull() const;
  int  GetLength() const;
  void MakeEmpty();
  ItemType GetItem(ItemType& item, bool& found);
  ItemType GetItem();
  void PutItem(ItemType item); 
  void DeleteItem(ItemType item);
  void ResetList();
  ItemType GetNextItem();
void PrintList();
void SortedType::Merge(SortedType*,SortedType*);
bool getCurrentPos();
void SortedType::incCurrentPos();
void search(int,bool&);
int GetValue();
private:
  NodeType* listData;
  int length;
  NodeType* currentPos;
};

