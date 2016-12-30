/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mldenov
 * @idnumber 61989
 * @task 7
 * @compiler VC
 *
 */
#include <iostream>	

using namespace std;

int main() {
	// 0 < n < 1 000 001, 1 < m < 100 001, 0 < y < m
	// x - [1, m-1]
	// x^n mod m = y
	int n, m, y, x;
	long long mod = 1;
	bool notFoundEvenOne = 1;
	bool firstFound = 1;

	cin >> n >> m >> y;

	// x^n mod m = y
	for (x = 1; x < m; x++) {
		for (int i = 1; i <= n; i++) {
			if (x % m == 0 && x % m != y)
				break;

			mod *= (x % m);

			if (mod > m)
				mod %= m;
		}

		if (firstFound && mod == y){
			cout << x;
			firstFound = 0;
			notFoundEvenOne = 0;
		}
		else if (mod == y) 
			cout << " " << x;

		mod = 1;
	}

	if (notFoundEvenOne)
		cout << "-1";

	cout << endl;
	return 0;
}