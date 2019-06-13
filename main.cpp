#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

#include"StuCard.h"

double *classAver(StuCard stuCard[], int size) { //計算每個科目的平均
	double a1 = (stuCard[0].getScore0() + stuCard[1].getScore0() + stuCard[2].getScore0() + stuCard[3].getScore0() + stuCard[4].getScore0()) / 5.0;
	double a2 = (stuCard[0].getScore1() + stuCard[1].getScore1() + stuCard[2].getScore1() + stuCard[3].getScore1() + stuCard[4].getScore1()) / 5.0;
	double a3 = (stuCard[0].getScore2() + stuCard[1].getScore2() + stuCard[2].getScore2() + stuCard[3].getScore2() + stuCard[4].getScore2()) / 5.0;
	
	return 0;
}


int main() { //改成陣列 student date
	
	StuCard student1("Jerry", 1, 80.0, 70.0, 90.0, Date(3, 20, 1997));
	StuCard student2("John", 1, 85.0, 77.0, 95.0, Date(5, 20, 1995));
	StuCard student3("Mary", 0, 83.0, 75.0, 70.0, Date(2, 18, 2007));
	StuCard student4("Tom", 1, 73.0, 95.0, 67.0, Date(11, 8, 2003));
	
	//test
	
	
	string name;
	bool sex;
	double scoreAry[3] = { 0,0,0 };
	int month, day, year;

	cin >> name >> sex >> scoreAry[0] >> scoreAry[1] >> scoreAry[2] >> month >> day >> year;
	StuCard student5(name, sex, scoreAry[0], scoreAry[1], scoreAry[2], Date(month, day, year));
	StuCard stuCard[5] = { student1, student2 , student3 , student4 ,student5 };
	
	student1.printCard();
	student2.printCard();
	student3.printCard();
	student4.printCard();
	student5.printCard();
	int size = 5;
	classAver(stuCard, size);

	double a11 = (stuCard[0].getScore0() + stuCard[1].getScore0() + stuCard[2].getScore0() + stuCard[3].getScore0() + stuCard[4].getScore0()) / 5.0;
	double a22 = (stuCard[0].getScore1() + stuCard[1].getScore1() + stuCard[2].getScore1() + stuCard[3].getScore1() + stuCard[4].getScore1()) / 5.0;
	double a33 = (stuCard[0].getScore2() + stuCard[1].getScore2() + stuCard[2].getScore2() + stuCard[3].getScore2() + stuCard[4].getScore2()) / 5.0;


	cout << fixed << setprecision(1) << "Average: " << a11 << ", " << a22 << ", " << a33;

	system("pause");

}
/*
 now print answer
Jerry,1,90
John,1,95
Mary,0,70
Tom,1,67
qerw,1,66


Jerry,1,80.0,70.0,90.0,3/20/1997
John,1,85.0,77.0,95.0,5/20/1995
Mary,0,83.0,75.0,70.0,2/18/2007
Tom,1,73.0,95.0,67.0,11/8/2003


*/