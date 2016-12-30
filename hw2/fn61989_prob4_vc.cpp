/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mldenov
 * @idnumber 61989
 * @task 4
 * @compiler VC
 *
 */
#include <iostream>
#include <string>

using namespace std;

void areTheSameSet (string strA, string strB) {
	int legthA = strA.length();
	int legthB = strB.length();

	for (int i = 0; i < legthA; i++)
		if (strB.find(strA.at(i)) == std::string::npos) {
			cout << "No" << endl;
			return;
		}
		
	for (int j = 0; j < legthB; j++)
		if (strA.find(strB.at(j)) == std::string::npos) {
			cout << "No" << endl;
			return;
		}
	cout << "Yes" << endl;
	return;
}

int main() {
	int a, b;

	cin >> a >> b;
	a = abs(a);
	b = abs(b);

	string strA = to_string(a);
	string strB = to_string(b);

	areTheSameSet(strA, strB);

	return 0;
}
