#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int count = 0;
	vector<char> v;
	string str;
	cin >> str;
	for (char c : str) {
		if (find(v.begin(), v.end(), c) == v.end()) {
			v.push_back(c);
			count++;
		}
	}
	(count%2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}
