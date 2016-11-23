#ifndef ItemType_HEADER
#define ItemType_HEADER
#include<string>



class ItemType 
{ 
public:
  ItemType();

  void Initialize(std::string);
private:
  std::string value;
};
 #endif
