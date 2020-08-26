#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main() {
	ll X, D, K;
	cin >> X >> K >> D;
	for (long i=0; i<K; i++) {
		ll t1 = abs(X+D); ll t2 = abs(X-D);
		if (t1 > t2) {
			X = t2;
		} else {
			X = t1;
		}
	}
	cout << X << endl;
}