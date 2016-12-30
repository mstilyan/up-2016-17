
/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mldenov
 * @idnumber 61989
 * @task 2
 * @compiler VC
 *
 */
#include <iostream>

using namespace std;

bool isPrime(unsigned long long num) {
	int i = 3;
	while (i <= num && num % i != 0)
		i += 2;

	return num == i;
}

int main() {
	int n;
	unsigned long long lastFound = 2;
	cin >> n;

	for (unsigned long long i = 3;; i += 2) {
		if (isPrime(i)) {
			if (lastFound + 2 == i) {
				cout << lastFound << " " << i << endl;
				n--;
			}
			lastFound = i;
		}
		if (n == 0)
			break;
	}

	return 0;
}
