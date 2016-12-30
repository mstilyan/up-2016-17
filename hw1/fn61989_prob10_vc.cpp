/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stilyan Mladenov
* @idnumber 61989
* @task 10
* @compiler VS
*
*/
#include <iostream>	
#include <cmath>	
#include <iomanip>

using namespace std;

int main() {

	double a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	double detA = a * e - b * d;
	double leftSide1 = c * e - b * f;
	double leftSide2 = a * f - d * c;

	if ( abs(detA) < FLT_EPSILON && abs(leftSide1) < FLT_EPSILON  && abs(leftSide2) < FLT_EPSILON )
		cout << "Many solutions" << endl;
	else if ( abs(detA) < FLT_EPSILON )
		cout << "No solution" << endl;
	else {
		cout << setprecision(5) <<leftSide1 / detA << " " << leftSide2 / detA << endl;
	}

	return 0;
}
