
#include"Date.h"

Date::Date() {

}
Date::Date(int newMonth, int newDay, int newYear) {
	month = newMonth;
	year = newYear;
	day = newDay;
}

int Date::getDay() {
	return day;
	}
int Date::getMonth() {
	return month;
	}
int Date::getYear() {
	return year;
	}

void Date::setDay(int newDay) {
	day = newDay;
	}
void Date::setMonth(int newMonth) {
	month = newMonth;
	}
void Date::setYear(int newYear) {
	year = newYear;
	}

void Date::setDate(int newMonth, int newDay, int newYear) {
	month = newMonth;
	day = newDay;
	year = newYear;
}

void Date::print() { //not work
	cout << month << "/" << day << "/" << year;
}


void Date::getAge() {
	cout << 2018 - year;
}

/*
void Date::print() {
	cout << month << "/" << day << "/" << year;
}
*/