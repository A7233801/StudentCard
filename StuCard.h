#ifndef STUCARD_H 
#define STUCARD_H

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include"Date.h"

class StuCard {
public:
	StuCard();
	StuCard(string,bool,double,double,double,Date);
	
	Date getDate();
	double getScore();      // (int ,double)
	double getScore0();
	double getScore1();
	double getScore2();
	bool getSex();
	string getName();
	double average();
	int getAge(Date);
	
	
	void printCard();  //jerry,1,80.0,70.0,90.0,3/20/1997,aver:80.0,age:20

	void setDate(Date);
//	Date setDate(Date newBirthDay);
	void setScore(double,double, double);
	void setSex(bool);
	void setName(string);
private:
	string name;
	bool sex;
	double scoreAry[3];
	Date birthDay;
};
#endif 
