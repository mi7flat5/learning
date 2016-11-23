//
// Created by shane on 7/27/15.
//
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Date.h"
#include <chrono>  // chrono::system_clock
#include <ctime>   // localtime
#include <sstream> // stringstream
#include <iomanip> // put_time
#include <string>
Date::Date()
{
	time();
}

Date::Date(int d, int m, int y) {
    if (d > 0 && d < 32 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) &&
        (y > 1899 && y < 2070)) {
        day = d;
        month = m;
        year = y;
    }
    else if (d > 0 && d < 31 && (m == 4 || m == 6 || m == 9 || m == 11) && (y > 1899 && y < 2070)) {
        day = d;
        month = m;
        year = y;
    }
    else if (d > 0 && d < 29 && m == 2 && ((y > 1899 && y < 2070))) {
        day = d;
        month = m;
        year = y;
    }
    else if (d == 29 && m == 2 && (y > 1899 && y < 2070) && leap_year(y)) {
        day = d;
        month = m;
        year = y;
    }
    else {
        std::cout << "Invalid date, set to current date." << '\n';
		time();
    }

}
Date::Date(int d, int m) {
    int y = 1900;
    if (d > 0 && d < 32 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) &&
        (y > 1899 && y < 2070)) {
        day = d;
        month = m;
        year = y;
    }
    else if (d > 0 && d < 31 && (m == 4 || m == 6 || m == 9 || m == 11) && (y > 1899 && y < 2070)) {
        day = d;
        month = m;
        year = y;
    }
    else if (d > 0 && d < 29 && m == 2 && ((y > 1899 && y < 2070))) {
        day = d;
        month = m;
        year = y;
    }
    else if (d == 29 && m == 2 && (y > 1899 && y < 2070) && leap_year(y)) {
        day = d;
        month = m;
        year = y;
    }
    else {
        std::cout << "Invalid date, set to current date." << '\n';
		time();
    }
}
void Date::print_numDate() const {
    if (year !=1900)
           std::cout << month << "/" << day << "/" << year << '\n';

      else
    {std::cout << month << "/" << day <<'\n';}
}
bool Date::leap_year(int y)const
{
    if ((y%4==0&&y%100!=0))
    {return true;}
    else if (y%100==0&&y%400==0)
    {return true;}
    else
        return false;
}
void  Date::time()
{
	std::time_t t = std::time(nullptr);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&t), "%Y");
    ss << year;
	ss << std::put_time(std::localtime(&t), "%m");
	ss << month;
	ss << std::put_time(std::localtime(&t), "%d");
	ss << day;
}