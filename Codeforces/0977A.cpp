#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	for (int i=0; i<k; i++) {
		if (n % 10 == 0) {
			string s = to_string(n);
			s = s.substr(0, s.size()-1);
			n = stoi(s);
		} else {
			n--;
		}
	}
	cout << n << endl;
}
