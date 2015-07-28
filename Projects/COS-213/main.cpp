#include <iostream>
#include"Date.h"


using namespace std;

class linkList
{
    string firstName,lastName, address, city,state;
    int zip;
    Date bDay, aDay;
    linkList *nextAdd = NULL;
    void alphaSort(linkList){}
public:
    linkList(){}
    void initializeList(){}
    void setZip(string){}
    void setFname(string){}
    void setLname(string){}
    void setAdd(string){}
    void setCity(string){}
    void setState(string){}
    void setZip(int){}
    void setPtr(linkList*){}
    string getFname()const {}
    string getLname()const {}
    string getAdd()const {}
    string getCity()const {}
    string getState()const {}
    int getZip()const{}
    Date getBday()const {}
    Date getAday(){}
    void insertEle(linkList);



};