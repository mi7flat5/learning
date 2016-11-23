#ifndef SORTED
#define SORTED

#include "ItemType.h" 


class SortedType 
{
public:
  SortedType();

  void MakeEmtpy();

  
  bool IsFull() const;


  int GetLength() const;

  ItemType GetItem(ItemType item, bool& found);



  void PutItem(ItemType item);
int SortedType::GetValue();
void SortedType::search(int value,bool& found);
  void DeleteItem(ItemType item);

ItemType GetItem();
  void ResetList();


  ItemType GetNextItem();

void Merge(SortedType,SortedType);

  void MakeEmpty();

  void PrintList();


private:
  int length;
  ItemType info[MAX_ITEMS];
  int currentPos;
};
#endif
