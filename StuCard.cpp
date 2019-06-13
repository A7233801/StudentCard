
#include"StuCard.h"

StuCard::StuCard() {
	name = "unknow";
	sex = 1;
	scoreAry[3] = { 0 };
	birthDay;
}
StuCard::StuCard(string newName, bool newSex, double newScoreAry1, double newScoreAry2, double newScoreAry3, Date newBirthDay) {
	name = newName;
	sex = newSex;
	scoreAry[0] = newScoreAry1;
	scoreAry[1] = newScoreAry2;
	scoreAry[2] = newScoreAry3;
	birthDay = newBirthDay;
}
double StuCard::getScore0(){
	return scoreAry[0];
}
double StuCard::getScore1(){
	return scoreAry[1];
}
double StuCard::getScore2(){
	return scoreAry[2];
}

Date StuCard::getDate() {
	return birthDay;
}
double StuCard::getScore() { // (int ,double)
	return scoreAry[0], scoreAry[1], scoreAry[2];
}
bool StuCard::getSex() {
	return sex;
}
string StuCard::getName() {
	return name;
}
double StuCard::average() {
	return (scoreAry[0] + scoreAry[1] + scoreAry[2]) / 3.0;
}

void StuCard::printCard() {  //jerry,1,80.0,70.0,90.0,3/20/1997,aver:80.0,age:20
	cout << fixed << setprecision(1) << name << ", " << sex << ", " << scoreAry[0] << ", " << scoreAry[1] << ", " << scoreAry[2] << ", ";
	birthDay.print();
	cout << fixed << setprecision(1) << ", " << (scoreAry[0] + scoreAry[1] + scoreAry[2]) / 3.0 << ", ";
	birthDay.getAge();
	cout << endl;
}

void StuCard::setDate(Date newBirthDay) {
	birthDay = newBirthDay;
}
void StuCard::setScore(double newScore1, double newScore2, double newScore3) {
	scoreAry[0] = newScore1;
	scoreAry[1] = newScore2;
	scoreAry[2] = newScore3;
}


void StuCard::setSex(bool newSex) {
	sex = newSex;
}
void StuCard::setName(string newName) {
	name = newName;
}