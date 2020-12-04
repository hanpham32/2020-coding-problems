#include <iostream>

#define ll long long int

using namespace std;

int main() {
	int TC, n;
	cin >> TC;

	for (int i=0; i<TC; i++) {
		cin >> n;
		ll m=0, count=1;
		cin >> m;
		for (int k=1; k<n; k++) {
			ll a;
			cin >> a;
			if (m < a) {
				m = a;
				count = 1;
			} else if (m == a) {
				count+=1;
			}
		}
		cout << "*" << m*count << endl;
	}
}
