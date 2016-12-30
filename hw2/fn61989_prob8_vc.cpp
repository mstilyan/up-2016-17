/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Stilyan Mldenov
 * @idnumber 61989
 * @task 8
 * @compiler VC
 *
 */
#include <iostream>	

using namespace std;

bool correctInput(int n, int m, int k) {
	while (n != 0 || m != 0) {
		if (n % 10 >= k || m % 10 >= k)
			return 0;
		n /= 10;
		m /= 10;
	}
	return 1;
}

int sumOfNumbers(int n, int m, int k) {
	int sum = 0, digit = 0, carry = 0, positionOfDigit = 1;

	while (n > 0 || m > 0 || carry)
	{
		digit = n % 10 + m % 10 + carry;

		if (digit > k - 1){
			carry = 1;
			digit %= k;
		}
		else
			carry = 0;

		n /= 10;
		m /= 10;

		sum += digit * positionOfDigit;
		positionOfDigit *= 10;
	}
	return sum;
}

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	if (!correctInput(n, m, k)) {
		cout << "Bad input data!" << endl;
		return 0;
	}
	
	cout << sumOfNumbers(n, m, k) << endl;

	return 0;
}
