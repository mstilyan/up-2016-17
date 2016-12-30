#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool sameElements(string tempstr, int size) {
	if (size - 1 == 0)
		return 1;
	if (tempstr[size - 1] == tempstr[size - 2]) {
		size--;
		sameElements(tempstr, size);
	}
	else
		return 0;
}

int main() {
	unsigned int num;
	string result;
	stringstream sstream;
	
	cin >> num;
	sstream << hex << num;
	result = sstream.str();

	int size = result.size();

	if ( sameElements(result, size) )
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}
