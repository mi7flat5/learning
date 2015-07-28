//
// Created by shane on 7/27/15.
//
#include<iostream>
#include "Date.h"
#include <chrono>  // chrono::system_clock
#include <ctime>   // localtime
#include <sstream> // stringstream
#include <iomanip> // put_time
#include <string>
Date::Date():day(1),month(1),year(1901){}

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
        std::cout << "invalid date." << '\n';
        day = 1;
        month = 1;
        year = 1900;
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
        std::cout << "invalid date." << '\n';
        day =1;
        month = 1;
        year = 1900;
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
std::string timeItIs()
{
    auto now = std::chrono::system_clock::now();
    auto in_time_t = std::chrono::system_clock::to_time_t(now);

    std::stringstream ss;
    ss << std::put_time(std::localtime(&in_time_t), "%D");
    return ss.str() ;
}