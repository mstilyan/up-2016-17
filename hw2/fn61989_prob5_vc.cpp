/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mldenov
 * @idnumber 61989
 * @task 5
 * @compiler VC
 *
 */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double D, a;
	int n;
	double Vo = 0;
	double S = 0;
	cin >> n >> D;

	while (n != 0) {
		cin >> a;

		if ((Vo * D + (a * D * D) / 2) > 0)
			S += Vo * D + (a * D * D) / 2;

		if ((Vo + a * D) > 0)
			Vo += a * D;
		else
			Vo = 0;

		n--;
	}

	cout.precision(5);
	cout << fixed << S << endl;

	return 0;
}