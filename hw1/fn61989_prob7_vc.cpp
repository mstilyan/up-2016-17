/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stilyan Mladenov
* @idnumber 61989
* @task 7
* @compiler VS
*
*/
#include <iostream> 
#include <cmath>

using namespace std;

double lengthCenterDot(double x, double y, double centerx, double centery) {
	return sqrt(pow(x - centerx, 2) + pow(y - centery, 2));
}

int main() {

	float x, y;
	int smallWhiteX = 0, smallWhiteY = -3; //with radious 1
	int smallBlackX = 0, smallBlackY = 3; // with radious 1
	int midWhiteX = 0, midWhiteY = 3; // with radious 3
	int midBlackX = 0, midBlackY = -3; // with radious 3
	int biggestR = 6;

	cin >> x >> y;

	bool neutral = lengthCenterDot(x, y, 0, 0) >= 6 ||
		lengthCenterDot(x, y, smallWhiteX, smallWhiteY) == 1 ||
		lengthCenterDot(x, y, smallBlackX, smallBlackY) == 1 ||
		lengthCenterDot(x, y, midWhiteX, midWhiteY) == 3 ||
		lengthCenterDot(x, y, midBlackX, midBlackY) == 3;
	
	bool autOfRange = lengthCenterDot(x, y, 0, 0) < 6;
	bool inSmallWhite = lengthCenterDot(x, y, smallWhiteX, smallWhiteY) < 1;
	bool inSmallBlack = lengthCenterDot(x, y, smallBlackX, smallBlackY) < 1;
	bool inMidWhite = lengthCenterDot(x, y, midWhiteX, midWhiteY) < 3;
	bool inMidBlack = lengthCenterDot(x, y, midBlackX, midBlackY) < 3;

	if (neutral)
		cout << "Neutral" << endl;
	else if (inSmallWhite)
		cout << "Good" << endl;
	else if (inSmallBlack)
		cout << "Evil" << endl;
	else if (x >= 0 && y <= 0)
		cout << "Evil" << endl;
	else if (x <= 0 && y >= 0)
		cout << "Good" << endl;
	else if (x >= 0 && y >= 0) 
		switch(inMidWhite) {
			case 1:
				cout << "Good" << endl;
				break;
			case 0:
				cout << "Evil" << endl;
		}
	else if (x <= 0 && y <= 0)
		switch(inMidBlack) {
			case 1:
				cout << "Evil" << endl;
				break;
			case 0:
				cout << "Good" << endl;
		}
		
	return 0;
}
