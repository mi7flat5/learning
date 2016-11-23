#include <iostream>
#include"Date.h"
#include "LinkList.h"
#include<sstream>
#include<cctype>



linkList::linkList() :nextAdd(nullptr){  }

linkList::~linkList()
{
	std::cout <<'\n'<< this->firstName << " " << this->lastName << " Deleted,\n ";
}

void linkList::initializeList()
{
	std::string tmpIn, tmpIn2, tmpIn3;
	std::cout << "\nEnter first name <space> last name: ";
	std::cin >> tmpIn;
	std::cin >> tmpIn2;
	setFname(tmpIn);
	setLname(tmpIn2);
	std::cout << "\nEnter address: ";
	std::cin.sync(); //clear buffer
	std::getline(std::cin, tmpIn3);
	tmpIn3 = UpperCase(tmpIn3);
	setAdd(tmpIn3);
	std::cout << "\nEnter city: ";
	std::cin.sync(); //clear buffer
	std::getline(std::cin, tmpIn);
	tmpIn = UpperCase(tmpIn);
	std::cout << "state, i.e 'NJ'<space> zip: ";
	std::cin >> tmpIn2;
	std::cin >> tmpIn3;
	setCity(tmpIn);
	setState(tmpIn2);
	setZip(tmpIn3);
	this->setBday();
	this->setAday();
	system("CLS");
}

void linkList::setZip(std::string z)
{
	std::stringstream ss;
	if (z.size() == 5 && varifyZip(z))
	{
		ss << z;
		ss >> zip;
	}
	else
	{
		std::cout << "\nInvalid Zip, Zip set to 00000. Edit manually to change.";
		zip = "00000";
	}
}

void linkList::setFname(std::string n)
{
	for (auto i = 0; i <= n.size(); ++i)
	{
		n[i] = tolower(n[i]);
	}
	n[0] = toupper(n[0]);
	firstName = n;
}

void linkList::setLname(std::string n)
{
	for (auto i = 0; i < n.size(); ++i)
	{
		n[i] = tolower(n[i]);
	}
	n[0] = toupper(n[0]);
	lastName = n;
}

void linkList::setAdd(std::string n)
{
	address = UpperCase(n);
}

void linkList::setCity(std::string n)
{
	city = UpperCase(n);
}

void linkList::setState(std::string n)
{
	if (n.size() == 2 && isalpha(n[0]) && isalpha(n[1]))
	{
		n[0] = toupper(n[0]);
		n[1] = toupper(n[1]);
		state = n;
	}
	else
	{
		std::cout << "\nInvalid state, set to NA. Edit manually ";
		state = "NA";
	}
}

void linkList::setPtr(linkList*)
{
}

void linkList::setBday()
{
	char choice;
	std::string tmpmonth, tmpday, tmpyear;
	int d = 0, m = 0, y = 0;
	system("CLS");
	std::cout << "\nSET " << this->firstName << "'s BIRTHDAY";
	std::cout << "\nDo you wish to enter year? Y to enter year any other key to only enter M/D. ";
	std::cin.sync();
	std::cin >> choice;
	std::cout << "\nEnter numeric month: ";
	std::cin.sync();
	std::cin >> tmpmonth;
	std::stringstream ss;
	if (tmpmonth.size() == 1 || tmpmonth.size() == 2)
	{
		if (tmpmonth.size() == 1 && isdigit(tmpmonth[0]))
		{
			ss << tmpmonth;
			ss >> m;
		}
		if (tmpmonth.size() == 2 && (isdigit(tmpmonth[0]) || tmpmonth[0] == '-') && isdigit(tmpmonth[1]))
		{
			if (tmpmonth[0] == '-')
			{
				m = -1;
			}
			else
			{
				ss << tmpmonth;
				ss >> m;
			}
		}
	}
	else m = 0;
	std::cout << "\nEnter numeric day: ";
	std::cin.sync();
	std::cin >> tmpday;
	std::stringstream st;
	if (tmpday.size() == 1 || tmpday.size() == 2)
	{
		if (tmpday.size() == 1 && isdigit(tmpday[0]))
		{
			st << tmpday;
			st >> d;
		}
		if (tmpday.size() == 2 && (isdigit(tmpday[0]) || tmpday[0] == '-') && isdigit(tmpday[1]))
		{
			if (tmpday[0] == '-')
			{
				d = -1;
			}
			else
			{
				st << tmpday;
				st >> d;
			}
		}
	}
	else d = 0;

	choice = toupper(choice);
	if (choice == 'Y')
	{
		std::cout << "\nEnter numeric year i.e '2015': ";
		std::cin.sync();
		std::cin >> tmpyear;
		if (tmpyear.size() == 4 || (tmpyear.size() == 1 && tmpyear[0] == -1) && isdigit(tmpyear[0]) && isdigit(tmpyear[1]) && isdigit(tmpyear[2]) && isdigit(tmpyear[3]))
		{
			std::stringstream su;
			su << tmpyear;
			su >> y;
			Date tmp(d, m, y);
			bDay = tmp;
		}
		else
		{
			y = 0;
			Date tmp(d, m, y);
			bDay = tmp;
		}
	}
	else
	{
		Date tmp(d, m);
		bDay = tmp;
	}
	system("pause");
	system("CLS");
}

//
void linkList::setAday()
{
	char choice;
	std::string tmpmonth, tmpday, tmpyear;
	int d = 0, m = 0, y = 0;
	system("CLS");
	std::cout << "\nSET " << this->firstName << "'s ANNIVERSARY";
	std::cout << "\nDo you wish to enter year? Y to enter year any other key to only enter M/D. ";
	std::cin.sync();
	std::cin >> choice;
	std::cout << "\nEnter numeric month, enter '-1 for month or day if date does not exist.  ";
	std::cin.sync();
	std::cin >> tmpmonth;
	std::stringstream ss;
	if (tmpmonth.size() == 1 || tmpmonth.size() == 2)
	{
		if (tmpmonth.size() == 1 && isdigit(tmpmonth[0]))
		{
			ss << tmpmonth;
			ss >> m;
		}
		if (tmpmonth.size() == 2 && (isdigit(tmpmonth[0]) || tmpmonth[0] == '-') && isdigit(tmpmonth[1]))
		{
			if (tmpmonth[0] == '-')
			{
				m = -1;
			}
			else
			{
				ss << tmpmonth;
				ss >> m;
			}
		}
	}
	else m = 0;
	std::cout << "\nEnter numeric day: ";
	std::cin.sync();
	std::cin >> tmpday;
	std::stringstream st;
	if (tmpday.size() == 1 || tmpday.size() == 2)
	{
		if (tmpday.size() == 1 && isdigit(tmpday[0]))
		{
			st << tmpday;
			st >> d;
		}
		if (tmpday.size() == 2 && (isdigit(tmpday[0]) || tmpday[0] == '-') && isdigit(tmpday[1]))
		{
			if (tmpday[0] == '-')
			{
				d = -1;
			}
			else
			{
				st << tmpday;
				st >> d;
			}
		}
	}
	else d = 0;

	choice = toupper(choice);
	if (choice == 'Y')
	{
		std::cout << "\nEnter numeric year i.e '2015': ";
		std::cin.sync();
		std::cin >> tmpyear;
		if (tmpyear.size() == 4 && isdigit(tmpyear[0]) && isdigit(tmpyear[1]) && isdigit(tmpyear[2]) && isdigit(tmpyear[3]))
		{
			std::stringstream su;
			su << tmpyear;
			su >> y;
			Date tmp(d, m, y);
			aDay = tmp;
		}
		else
		{
			y = 0;
			Date tmp(d, m, y);
			aDay = tmp;
		}
	}
	else
	{
		Date tmp(d, m);
		aDay = tmp;
	}
	system("pause");
	system("CLS");
}


void linkList::showList()
{
	std::cout << '\n' << lastName << ", " << firstName;
	std::cout << '\n' << address;
	std::cout << '\n' << city << ", " << state << " " << zip << '\n';
	std::cout << "Birthday: ";
	bDay.print_numDate();
	std::cout << "Anniversary: ";
	aDay.print_numDate();
}

void linkList::test()
{
	//linkList tmp = FirstAdd;

}

void linkList::listDisp(linkList* L)
{
	while (L)
	{
		showList();
		L = nextAdd;
	}
}

int linkList::getBMonth() const
{
	return this->bDay.getMonth();
}

int linkList::getAMonth() const
{
	return this->aDay.getMonth();
}

int linkList::getBday() const
{
	return this->bDay.getDay();
}

int linkList::getAday() const
{
	return this->aDay.getDay();
}

std::string linkList::getFname()const
{
	return firstName;
}

std::string linkList::getLname() const
{
	return lastName;
}

std::string linkList::getAdd() const
{
	return address;
}

std::string linkList::getCity() const
{
	return city;
}

std::string linkList::getState() const
{
	return state;
}

std::string linkList::getZip()const
{
	return zip;
}

void linkList::showBday()const
{
	bDay.print_numDate();
}

void linkList::showAday()const
{
	aDay.print_numDate();
}

void linkList::setNextadd(linkList* ne)
{
	nextAdd = ne;
}


linkList* linkList::getNext()const
{
	return nextAdd;
}

/*Private helper functions*/

bool linkList::varifyZip(std::string z)
{
	for (auto i = 0; i < z.size(); ++i)
	{
		if (!isdigit(z[i]))
		{
			return false;
		}
	}
	return true;
}

std::string linkList::UpperCase(std::string s)
{
	for (int i = 0; i < s.size(); ++i)
		s[i] = toupper(s[i]);
	return s;
}