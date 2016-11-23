#include <iostream>
#include "linkList.h"
#include <string>
#include <iomanip>

using namespace std;

linkList* FirstEle;

int main()
{
	void listDisp(linkList*);
	void newEle(linkList*);
	void deleteEle(linkList*);
	void editEle(linkList*);
	void gencards(linkList*);
	void deleteList(linkList*);
	void TestList();
	char menu;
	TestList();
	while (1)
	{
		cout << "\n==MAIN==>" << " a. Add Entry. " << "    b. Display List. " << "  c. Delete an entry. ";
		cout << "\n==MENU==>" << " d. Edit an Entry. " << "e. Generate Cards. " << "x. Exit Program. " << "\n\n";
		cout << "|>";
		cin >> menu;
		switch (menu)
		{
		case ('a'): newEle(FirstEle);
			break;
		case ('b'): listDisp(FirstEle);
			break;
		case ('c'): deleteEle(FirstEle);
			break;
		case ('d'): editEle(FirstEle);
			break;
		case ('e'): gencards(FirstEle);
			break;
		case ('x'): deleteList(FirstEle);
			system("pause");
			return 0;
		}
	}
}

void listDisp(linkList* L)
{
	
	system("CLS");
	if (L == nullptr)
	{
		cout << "\nNo list to display.\n\n";
	}
	while (L != nullptr)
	{
		L->showList();
		L = L->getNext();
		cout << "________________________\n";
		
	}
	system("pause");
	system("CLS");
}

void newEle(linkList* firstadd)
{
	void insertEle(linkList*, linkList*);
	linkList* tmpList;
	tmpList = new linkList;
	tmpList->initializeList();
	insertEle(firstadd, tmpList);
}

void deleteEle(linkList* L)
{
	void nameDisp(linkList*);
	system("CLS");
	if (L == nullptr)
	{
		cout << "\nNo enties to delete. \n";
		system("pause");
		system("CLS");
		return;
	}
	nameDisp(L);
	linkList* holadd = L;
	string lName;
	cout << "\nEnter last name of entry you want to delete: ";
	cin.sync();
	cin >> lName;
	for (auto i = 0; i < lName.size(); ++i)
		lName[i] = tolower(lName[i]);
	lName[0] = toupper(lName[0]);
	if (L->getLname() == lName && L->getNext() != nullptr)
	{
		FirstEle = L->getNext();
		system("CLS");
		delete L;

		return;
	}
	if (L->getNext() != nullptr)
	{
		while (lName != L->getLname())
		{
			holadd = L;
			L = L->getNext();
			if (L == nullptr)
			{
				system("CLS");
				cout << "\nName not found, check spelling. ";
				return;
			}
		}
		holadd->setNextadd(L->getNext());
		system("CLS");
		delete L;
		return;
	}
	if (L->getNext() == nullptr)
	{
		delete L;
		FirstEle = nullptr;
	}
	system("CLS");
}

void editEle(linkList* L)
{
	void nameDisp(linkList*);
	system("CLS");
	if (L == nullptr)
	{
		cout << "\nNo list to edit.\n ";
		system("pause");
		system("CLS");
		return;
	}
	void update(linkList*);
	linkList* holadd = L;
	string lName;
	nameDisp(L);
	cout << "\nEnter last name of entry you want to edit: ";
	cin.sync();
	cin >> lName;
	for (auto i = 0; i < lName.size(); ++i)
		lName[i] = tolower(lName[i]);
	lName[0] = toupper(lName[0]);

	if (L->getNext() != nullptr)
	{
		while (lName != L->getLname())
		{
			holadd = L;
			L = L->getNext();
			if (L == nullptr)
			{
				cout << "\nName not found, check spelling. ";
				return;
			}
		}
		holadd->setNextadd(L->getNext());
		update(L);
		return;
	}
	if (L->getNext() == nullptr)
	{
		update(L);
	}
}

void insertEle(linkList* firstadd, linkList* tmpList)
{
	linkList* holdadd = firstadd;
	if (firstadd == nullptr)
	{
		FirstEle = tmpList;

		return;
	}
	if (tmpList->getLname() < firstadd->getLname())
	{
		tmpList->setNextadd(firstadd);
		FirstEle = tmpList;
		return;
	}
	while (tmpList->getLname() > firstadd->getLname())
	{
		holdadd = firstadd;
		firstadd = firstadd->getNext();
		if (firstadd == nullptr)
		{
			holdadd->setNextadd(tmpList);
			tmpList->setNextadd(nullptr);
			return;
		}
	}

	tmpList->setNextadd(holdadd->getNext());
	holdadd->setNextadd(tmpList);
}

void update(linkList* L)
{
	void insertEle(linkList*, linkList*);
	char menu;
	while (1)
	{
		string tmpstring;

		cout << "\n========> EDITING " << L->getFname() << " " << L->getLname() << "'s" << " =====ENTRY." << '\n';
		cout << "\n==EDIT==> a. Edit Last Name. " << "b. Edit First Name. " << "   c. Edit Address. ";
		cout << "\n========> d. Change City. " << "   e. Change State. " << "      f. Change Zip Code. ";
		cout << "\n==MENU==> g. Change Bithday. " << "h. Change Anniversary. " << "x. Exit edit menu. \n\n";
		L->showList();
		cout << "|>";
		cin >> menu;
		switch (menu)
		{
		case ('a'): cout << "Enter new last name: ";
			cin.sync();
			cin >> tmpstring;
			L->setLname(tmpstring);
			break;
		case ('b'): cout << "Enter new First name: ";
			cin.sync();
			cin >> tmpstring;
			L->setFname(tmpstring);
			break;
		case ('c'): cout << "Enter new address: ";
			cin.sync();
			getline(cin, tmpstring);
			L->setAdd(tmpstring);
			break;
		case ('d'): cout << "Enter new City: ";
			cin.sync();
			getline(cin, tmpstring);
			L->setCity(tmpstring);
			break;
		case ('e'): cout << "Enter new state: ";
			cin.sync();
			cin >> tmpstring;
			L->setState(tmpstring);
			break;
		case ('f'): cout << "Enter new zip: ";
			cin.sync();
			cin >> tmpstring;
			L->setZip(tmpstring);
			break;
		case ('g'): L->setBday();
			break;
		case ('h'): L->setAday();
			break;
		case ('x'): system("CLS");
			insertEle(FirstEle, L);
			return;
		}
		
		system("CLS");
	}
}

void gencards(linkList* L)
{
	Date today;
	system("CLS");
	int i = 0;
	if (L == nullptr)
	{
		cout << "\nNo entries to check.\n ";
		system("pause");
		system("CLS");
		return;
	}
	while (L)
	{
		if (L->getAday() == today.getDay() && L->getAMonth() == today.getMonth())
		{
			system("CLS");
			cout << "\nDear " << L->getFname() << ",\n\n";
			cout << "Hope your anniversary is really wonderful and this coming year is the best yet! \n\nYours truely,\nShane\n\n";
			system("pause");
			++i;
		}
		if (L->getBday() == today.getDay() && L->getBMonth() == today.getMonth())
		{
			system("CLS");
			cout << "\nDear " << L->getFname() << ",\n\n";
			cout << "Hope your birthday is really wonderful and this coming year is the best yet! \n\nYours truely,\nShane\n\n";
			system("pause");
			++i;
		}
		L = L->getNext();
	}
	if (i == 0)
		cout << "No entries have significant dates today.\n\n";
	system("pause");
	system("CLS");
}

void TestList()
{
	void insertEle(linkList*, linkList*);
	linkList *Erin, *Joey, *Andy, *Shane, *Bill, *Karen;
	Erin = new linkList;
	Joey = new linkList;
	Andy = new linkList;
	Shane = new linkList;
	Bill = new linkList;
	Karen = new linkList;
	Erin->setFname("Erin");
	Erin->setLname("Apple");
	Erin->aDay.setDate(3, 11, 1972);
	Erin->bDay.setDate(6, 1, 0);
	Joey->setFname("Joey");
	Joey->setLname("Zoey");
	Joey->aDay.setDate(1, 1, -1);
	Joey->bDay.setDate(26, 11, 1955);
	Andy->setFname("Andy");
	Andy->setLname("smith");
	Andy->aDay.setDate(1, 1, -1);
	Andy->bDay.setDate(30, 4, 0);
	Shane->setFname("shane");
	Shane->setLname("harmon");
	Shane->aDay.setDate(6, 5, 0);
	Shane->bDay.setDate(8, 11, 0);
	Bill->setFname("Bill");
	Bill->setLname("Quantum");
	Bill->aDay.setDate(1, 5, -1);
	Karen->setFname("karen");
	Karen->setLname("violet");
	Karen->bDay.setDate(22, 9, 0);
	insertEle(FirstEle, Joey);
	insertEle(FirstEle, Andy);
	insertEle(FirstEle, Shane);
	insertEle(FirstEle, Karen);
	insertEle(FirstEle, Bill);
	insertEle(FirstEle, Erin);
}

void deleteList(linkList* L)
{
	linkList* holdadd;
	if (L == nullptr)
	{
		return;
	}
	while (L != nullptr)
	{
		holdadd = L;

		L = L->getNext();
		delete holdadd;
	}
}
void nameDisp(linkList* L)
{

	
	while (L != nullptr)
	{
		cout << L->getLname() << ", " << L->getFname();
		L = L->getNext();
		cout << "\n-----------------\n";

	}
	
}