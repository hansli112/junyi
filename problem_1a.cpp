#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cout << "please input a string" << endl;
	
	cin >> str;
	for (auto it = str.rbegin(); it != str.rend(); it++)
		cout << *it;
	cout << endl;
	
	return 0;
}
