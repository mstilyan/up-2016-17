/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mldenov
 * @idnumber 61989
 * @task 3
 * @compiler VC
 *
 */
#include <iostream>
#include <string>

using namespace std;

long amountOfStrbInStra(string aStr, string bStr) {
	long lengthOfStrA = aStr.length();
	long lengthOfStrB = bStr.length();
	int counter = 0;
	string partOfStrA = "";

	for (long i = 0; i <= lengthOfStrA - lengthOfStrB; i++) {
		for (long j = i; j < i + lengthOfStrB; j++)
			partOfStrA += aStr.at(j);
		if (partOfStrA == bStr)
			counter++;
		partOfStrA = "";
	}
	return counter;
}

int main() {
	long long a, b;
	cin >> b >> a;

	string aStr = to_string(a);
	string bStr = to_string(b);

	cout << amountOfStrbInStra(aStr, bStr) << endl;

	system("pause>0");
	return 0;
}