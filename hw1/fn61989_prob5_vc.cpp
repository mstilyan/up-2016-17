/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stilyan Mladenov
* @idnumber 61989
* @task 5
* @compiler VS
*
*/
#include <iostream>

using namespace std;

int main() {
	int rOfGreen = 3, rOfWhite = 1, rOfRed = 8;
	float aimForX, aimForY;
	float diversionX, diversionY;
	float radious, vector, accAimX, accAimY;

	cin >> aimForX >> aimForY >> diversionX >> diversionY;

	accAimX = aimForX + diversionX;
	accAimY = aimForY + diversionY;
	vector = roundf(sqrt(accAimX * accAimX + accAimY * accAimY) * 1000) / 1000;

	bool outOfTarget = vector == rOfGreen || vector == rOfWhite || vector >= rOfRed;

	if (outOfTarget)
		cout << 0 << endl;
	else if (vector < rOfWhite)
		cout << 60 << endl;
	else if (vector < rOfGreen)
		cout << 20 << endl;
	else if (vector < rOfRed)
		cout << 10 << endl;

	return 0;
}
