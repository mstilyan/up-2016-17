/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stilyan Mladenov
* @idnumber 61989
* @task 6
* @compiler VS
*
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int x1, x2, y1, y2, h1, h2, l1, l2;
	int a = 0, b = 0;
	cin >> x1 >> y1 >> h1 >> l1;
	cin >> x2 >> y2 >> h2 >> l2;

	bool cond1ForX = x2 <= x1 && (x1 + l1) <= (x2 + l2); // a = l1
	bool cond2ForX = x1 <= x2 && (x2 + l2) <= (x1 + l1); // a = l2
	bool cond3ForX = x2 > x1 && (x1 + l1) > x2; // a = abs(x1 + l1 - x2)
	bool cond4ForX = x1 > x2 && (x2 + l2) > x1; // a = abs(x2 + l2 - x1)
	bool cond1ForY = y2 <= y1 && (y1 + h1) <= (y2 + h2); // b = h1
	bool cond2ForY = y1 <= y2 && (y2 + h2) <= (y1 + h1); // b = h2
	bool cond3ForY = y1 > y2 && (y2 + h2) > y1; // b = abs(y2 + h2 - y1)
	bool cond4ForY = y2 > y1 && (y1 + h1) > y2; // b = abs(y1 + h1 - y2)

// predefining _a_ according to conditions of X
	if (cond1ForX)
		a = l1;
	else if (cond2ForX)
		a = l2;
	else if (cond3ForX)
		a = abs(x1 + l1 - x2);
	else if (cond4ForX)
		a = abs(x2 + l2 - x1);

// predefining _a_ according to conditions of Y
	if (cond1ForX)
		b = h1;
	else if (cond2ForY)
		b = h2;
	else if (cond3ForY)
		b = abs(y2 + h2 - y1);
	else if (cond4ForY)
		b = abs(y1 + h1 - y2);

	cout << a * b << endl;

	return 0;
}
