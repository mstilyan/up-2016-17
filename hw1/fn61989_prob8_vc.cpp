/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stilyan Mladenov
* @idnumber 61989
* @task 8
* @compiler VS
*
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	int sum;
	int fifties, twenties, tens, fives, twoes, ones, remainder;
	
	cin >> sum;

	fifties = sum / 50;
	remainder = sum % 50;
	twenties = remainder / 20;
	remainder %= 20;
	tens = remainder / 10;
	remainder %= 10;
	fives = remainder / 5;
	remainder %= 5;
	twoes = remainder / 2;
	remainder %= 2;
	ones = remainder / 1;


	cout << sum << " = ";
	if (fifties != 0)
		cout << fifties << "*50";
	if (twenties != 0)
		cout << " + "<<twenties << "*20";
	if (tens != 0)
		cout << " + " << tens << "*10";
	if (fives != 0)
		cout << " + " << fives << "*5";
	if (twoes != 0)
		cout << " + " << twoes << "*2";
	if (ones != 0)
		cout << " + " << ones << "*1" << endl;

	return 0;
}
