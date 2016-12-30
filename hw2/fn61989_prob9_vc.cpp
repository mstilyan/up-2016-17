/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mldenov
 * @idnumber 61989
 * @task 9
 * @compiler VC
 *
 */
#include <iostream>
#include <string>

using namespace std;

void almostTheSame(string strA, string strB) {

	for (int i = 0; i < strB.length(); i++) 
		if (strA[i] != strB[i]) {
			if (strA.length() == strB.length()) {
				cout << "No" << endl;
				return;
			}
			strA.erase(strA.begin() + i);
		}
	
	if (strA.length() - strB.length() == 1)
		strA.erase(strA.end() - 1);

	if (strA == strB)
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;

	return;
}

int main() {
	unsigned numA, numB;
	cin >> numA >> numB;

	string strA = to_string(numA);
	string strB = to_string(numB);

	if (strA.length() - strB.length() != 1) {
		cout << "No" << endl;
		system("pause>0");
		return 0;
	}

	almostTheSame(strA, strB);

	return 0;
}
