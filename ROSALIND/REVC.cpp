#include <bits/stdc++.h>
using namespace std;
int main() {
	map<char, char> map;

	map['A'] = 'T';
	map['T'] = 'A';
	map['C'] = 'G';
	map['G'] = 'C';

	string s;
	cin >> s;
	for (int i=0; i<s.size(); i++) {
		char c = s.at(i);
		s[i] = map[c];
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}
