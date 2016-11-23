//
// Created by shane on 7/27/15.
//

#ifndef LIST_DATE_H
#define LIST_DATE_H


class Date
{
	int day, month, year;
	bool leap_year(int)const;
	void time();


public:
	Date();
	explicit Date(int, int, int);
	explicit Date(int, int);
	~Date();
	void print_numDate()const;
	int getDay()const;
	int getMonth()const;
	int getYear()const;
	//std::string get_string_year()const;
	void setYear(int);
	void setMonth(int);
	void setDay(int);
	bool EqualDate(Date);
	void setDate(int, int, int);
};
#endif //LIST_DATE_H

