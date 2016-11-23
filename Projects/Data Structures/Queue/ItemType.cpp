// The following definitions go into file ItemType.cpp. 
#include <fstream>
#include <iostream>
#include "ItemType.h"
#include<string>


ItemType::ItemType()
{ 
  value = "none";
}



void ItemType::Initialize(std::string name)
{
  value = name;
}


