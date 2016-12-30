/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stilyan Mladenov
* @idnumber 61989
* @task 2
* @compiler VS
*
*/
#include <iostream>

using namespace std;

int main() {

	int year, mth, date, last;
	char num[10];
	char sex = 'M';
	int daysInEachMth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> num[6] >> num[7] >> num[8] >> num[9];
	
	year = 10 * int(num[0] - '0') + int(num[1] - '0');
	mth = 10 * int(num[2] - '0') + int(num[3] - '0');
	date = 10 * int(num[4] - '0') + int(num[5] - '0');
	last = int(num[8] - '0');

	bool XIXc = mth >= 21 && mth <= 32;
	bool XXc = mth >= 1 && mth <= 12;
	bool XXIc = mth >= 41 && mth <= 52;
	bool EgnIsValid = 0;

	if (last % 2)
		sex = 'F';

	if (XIXc) {
		mth -= 20;
		year += 1800;
	}
	else if (XXc) {
		year += 1900 ;
	}
	else if (XXIc) {
		mth -= 40;
		year += 2000;
	}
	else {
		cout << "Bad input data!" << endl;
		system("pause>0");
		return 0;
	}
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	if (isLeapYear && mth == 2 && (date < 1 || date > 29)) {
		cout << "Bad input data!" << endl;
		system("pause>0");
		return 0;
	}
	else if (date < 1 || date > daysInEachMth[mth - 1]) {
		cout << "Bad input data!" << endl;
		system("pause>0");
		return 0;
	}

	if (date < 9)
		cout << "0" << date;
	else
		cout << date;
	if (mth < 9)
		cout << ".0" << mth;
	else
		cout << "." << mth;
	cout << "." << year << " " << sex << endl;

	return 0;
}
