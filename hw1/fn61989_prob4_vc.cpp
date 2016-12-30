/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stilyan Mladenov
* @idnumber 61989
* @task 4
* @compiler VS
*
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	char attPiece;
	char attX, attY, kingX, kingY;

	cin >> attPiece;
	cin >> attX >> attY;
	cin >> kingX >> kingY;

	bool rookCheck = int(attX) == int(kingX) || int(attY) == int(kingY);
	bool bishopCheck = abs(int(attX) - int(kingX)) == abs(int(attY) - int(kingY));
	bool queenCheck = rookCheck || bishopCheck;
	bool opt1ForKcheck = (abs(int(attX) - int(kingX)) == 1) && abs(int(attY) - int(kingY)) == 2;
	bool opt2ForKcheck = (abs(int(attX) - int(kingX)) == 2) && abs(int(attY) - int(kingY)) == 1;
	bool knightCheck = opt1ForKcheck || opt2ForKcheck;
	bool result;

	switch (attPiece) {
	case 'R':
		result = rookCheck;
		break;
	case 'B':
		result = bishopCheck;
		break;
	case 'Q':
		result = queenCheck;
		break;
	case 'N':
		result = knightCheck;
		break;
	default:
		cout << "Invalid piece!" << endl;
	}

	if (result)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}
