#include <iostream>

#include <cstring>

#include <forward_list>
#include <string>

using namespace std;

const int BUFFSIZE = 1024 * 1024;

int main() {
	forward_list <string> lst;
	string str;
	char buffer[BUFFSIZE];

	cout << "please input a sentence" << endl;
	cin.getline(buffer, BUFFSIZE);
	char *start = strtok(buffer, " ");
	lst.push_front(start);

	while ((start = strtok(nullptr, " ")) != nullptr)
		lst.push_front(start);

	for (auto it = lst.begin(); it != lst.end(); it++)
		cout << *it << ' ';
	cout << "\b" << endl;

	return 0;
}
