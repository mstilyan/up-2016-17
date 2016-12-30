/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mldenov
 * @idnumber 61989
 * @task 10
 * @compiler VC
 *
 */
#include <iostream>	

using namespace std;

void pAdicValuation(long firstPrime, unsigned long long n, long secondPrime) {
	if (n == 0) {
		cout << "infinity" << endl;
		return;
	}

	int firstPrimePow = 0;
	int secondPrimePow = 0;
	int copyOfN = n;

	while (n  % firstPrime == 0 ) {
		n /= firstPrime;
		firstPrimePow++;
	}

	while (copyOfN % secondPrime == 0) {
		copyOfN /= secondPrime;
		secondPrimePow++;
	}
	
	if (firstPrimePow > secondPrimePow) {
		cout << firstPrimePow << endl;
		return;
	}

	cout << secondPrimePow << endl;
	return;
}

int main() {
	long p1, p2, nq;
	unsigned long long n;

	cin >> nq;
	while (nq != 0) {
		cin >> p1 >> n >> p2;
		pAdicValuation(p1, n, p2);
		nq--;
	}

	return 0;
}