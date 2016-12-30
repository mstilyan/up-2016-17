/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Stilyan Mladenov
* @idnumber 61989
* @task 1
* @compiler VS
*
*/
#include <iostream>

using namespace std;

int main() {
	int num;
	
	char *thousands[4] = { "", "M", "MM", "MMM" };
	char *hundreds[10] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
	char *tens[10] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
	char *ones[10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
	
	cin >> num;

	if (num < 1 || num > 3000)
		cout << "Invalid number!" << endl;
	else
		cout << thousands[num / 1000] << hundreds[(num % 1000) / 100] << tens[(num % 100 / 10)] << ones[num % 10] << endl;
	
	return 0;
}
