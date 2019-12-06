#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "please input a number" << endl;
	cin >> number;

	for (int i = 1; i <= number; i++)
		if (((i % 3 != 0) && (i % 5 != 0)) || (i % 3 == 0 && i % 5 == 0))
			cout << i << ' ';
	cout << "\b" << endl;

	return 0;
}
