#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s; 
	
	getline(cin, s);

	vector<char> v = {};
	int count = 0;
	for (char c : s) {
		count++;
		if (c >= 97 && c <= 122) {
			if (find(v.begin(), v.end(), c) == v.end()) {
				v.push_back(c);
			}
		} 
	}

	cout << v.size() << endl;
	
}
