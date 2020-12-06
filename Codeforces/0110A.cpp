#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int i = 0;
	bool b = true;
	if (str.size() == 1) {
		i--;
	}
	do {
		char c = str[i];
		if (c != '4' && c != '7') {
			cout << "NO" << endl;
			b = false;
			break;
		}
		i++;
	} while (i < str.size());
	if (b == true) cout << "YES" << endl;
}
