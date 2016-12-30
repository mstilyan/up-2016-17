/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mldenov
 * @idnumber 61989
 * @task 6
 * @compiler VC
 *
 */
#include <iostream>	

using namespace std;

unsigned long long binom(int n, int k) {

	if (k == n || k == 0)
		return 1;

	if (k > n / 2)
		k = n - k;

	int *numerator = new int[k];
	int *denominator = new int[k];
	unsigned long long binom = 1;

	for (int i = 0; i < k; i++)
		numerator[i] = n + 1 - (i + 1);
	for (int j = 0; j < k; j++)
		denominator[j] = j + 1;

	for (int i = 0; i < k; i++)
		for (int j = 0; j < k; j++)
			if (numerator[i] % denominator[j] == 0) {
				numerator[i] /= denominator[j];
				denominator[j] = 1;
			}
			else if (denominator[j] != 1)
				for (int p = 1; p <= denominator[j]; p++){
					if (denominator[j] % p == 0 && numerator[i] % p == 0) {
						numerator[i] /= p;
						denominator[j] /= p;
					}
					if (p > numerator[i] || numerator[i] == 1)
						break;
				}

	for (int i = 0; i < k; i++)
		binom *= numerator[i];

	delete[] numerator;
	delete[] denominator;
	return binom;
}

int main() {
	int n;
	cin >> n;

	for (int k = 0; k <= n; k++) {
		cout << binom(n, k);
		if (k != n)
			cout << " ";
	}
	cout << endl;

	return 0;
}
