#ifndef DTAE_H 
#define DTAE_H

#include<iostream>
using namespace std;

class Date {
public:
	Date();
	Date(int, int, int);

	int getDay();
	int getMonth();
	int getYear();

	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setDate(int, int, int);

	void print();
	void getAge();

private:
	int day;
	int month;
	int year;
};
#endif 
