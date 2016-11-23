#ifndef LIST_LINKLIST_H
#define LIST_LINKLIST_H

#include <iostream>
#include "Date.h"

class linkList
{
	std::string firstName, lastName, address, city, state, zip;
	friend void TestList();
	Date bDay, aDay;
	linkList* nextAdd;
	//static linkList FirstAdd;
	bool varifyZip(std::string);
	std::string UpperCase(std::string);

public:
	linkList();
	~linkList();
	void initializeList();
	void setZip(std::string);
	void setFname(std::string);
	void setLname(std::string);
	void setAdd(std::string);
	void setCity(std::string);
	void setState(std::string);
	void setPtr(linkList*);
	void setBday();
	void setAday();
	void showList();
	void test();
	void listDisp(linkList*);
	int getBMonth()const;
	int getAMonth()const;
	int getBday()const;
	int getAday()const;

	std::string getFname()const;

	std::string getLname()const;

	std::string getAdd()const;

	std::string getCity()const;

	std::string getState()const;
	std::string getZip()const;
	void showBday()const;
	void showAday()const;

	linkList* getNext()const;
	void setNextadd(linkList*);
};
#endif //LIST_LINKLIST_H