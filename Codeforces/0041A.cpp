#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	reverse(s2.begin(), s2.end());
	(s1 == s2) ? cout << "YES" << endl : cout << "NO" << endl;
}
