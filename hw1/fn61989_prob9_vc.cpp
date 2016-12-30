/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stilyan Mladenov
* @idnumber 61989
* @task 9
* @compiler VS
*
*/
#include <iostream>

using namespace std;

int main() {
	int num1, num2;
	char operation;

	cin >> num1 >> operation >> num2;

	if (num1 > 15)
		num1 %= 16;
	if (num2 > 15)
		num2 %= 16;

	switch (operation) {
	case '+':
		cout << (num1 + num2) % 16 << endl;
		break;
	case '-': 
		if (num1 - num2 < 0)
			cout << 16 + (num1 - num2) << endl;
		else
			cout << num1 - num2 << endl;
		break;
	case '*':
		cout << (num1 * num2) % 16 << endl;
		break;
	case '/':
		if (num2 == 0)
			cout << "Division by zero!" << endl;
		else
			cout << num1 / num2 << endl;
		break;
	case '%':
		if (num2 == 0)
			cout << "Division by zero!" << endl;
		else
			cout << num1 % num2 << endl;
		break;
	default:
		cout << "Invalid operation!" << endl;
	}

	return 0;
}
