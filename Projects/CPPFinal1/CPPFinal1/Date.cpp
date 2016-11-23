//
// Created by shane on 7/27/15.
//
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Date.h"
#include <ctime> // localtime

#include <sstream> // stringstream

#include <iomanip> // put_time


Date::Date()
{
	time();
}

Date::Date(int d, int m, int y)
{
	if (d == -1 || m == -1 || y == -1)
	{
		day = 1;
		month = 1;
		year = -1;
		return;
	}

	if (d > 0 && d < 32 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (y > 1899 && y < 2070))
	{
		day = d;
		month = m;
		year = y;
	}
	else if (d > 0 && d < 31 && (m == 4 || m == 6 || m == 9 || m == 11) && (y > 1899 && y < 2070))
	{
		day = d;
		month = m;
		year = y;
	}
	else if (d > 0 && d < 29 && m == 2 && ((y > 1899 && y < 2070)))
	{
		day = d;
		month = m;
		year = y;
	}
	else if (d == 29 && m == 2 && (y > 1899 && y < 2070) && leap_year(y))
	{
		day = d;
		month = m;
		year = y;
	}
	else
	{
		std::cout << "Invalid date, set to current date." << "\n\n";
		time();
	}
}

Date::Date(int d, int m)
{
	if (d == -1 || m == -1)
	{
		year = -1;
		return;
	}
	if (d > 0 && d < 32 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
	{
		day = d;
		month = m;
		year = 0;
	}
	else if (d > 0 && d < 31 && (m == 4 || m == 6 || m == 9 || m == 11))
	{
		day = d;
		month = m;
		year = 0;
	}
	else if (d > 0 && d < 29 && m == 2)
	{
		day = d;
		month = m;
		year = 0;
	}
	else if (d == 29 && m == 2)
	{
		day = d;
		month = m;
		year = 0;
	}
	else
	{
		std::cout << "Invalid date, set to current date" << "\n\n";
		time();
	}
}

Date::~Date()
{

}

void Date::print_numDate() const
{
	if (year == -1)
	{
		std::cout << " N/A\n";
		return;
	}
	if (year == 0)
	{
		std::cout << month << "/" << day << '\n';
	}
	else
	{
		std::cout << month << "/" << day << "/" << year << '\n';
	}
}

bool Date::leap_year(int y)const
{
	if ((y % 4 == 0 && y % 100 != 0))
	{
		return true;
	}
	else if (y % 100 == 0 && y % 400 == 0)
	{
		return true;
	}
	else
		return false;
}

void Date::time()
{
	std::time_t t = std::time(nullptr);

	std::stringstream ss, st, su;
	ss << std::put_time(std::localtime(&t), "%Y");
	ss >> year;
	st << std::put_time(std::localtime(&t), "%m");
	st >> month;
	su << std::put_time(std::localtime(&t), "%d");
	su >> day;
}


bool Date::EqualDate(Date a)
{
	if (a.month == this->month && a.day == this->day)
	{
		return true;
	}
	return false;
}

void Date::setDate(int d, int m, int y)

{
	day = d;
	month = m;
	year = y;
}

int Date::getYear()const
{
	return year;
}

void Date::setYear(int x)
{
	year = x;
}

void Date::setMonth(int x)
{
	month = x;
}

void Date::setDay(int x)
{
	day = x;
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}
