#include <bits/stdc++.h>

using namespace std;

int main() {
	string S;
	cin >> S;
	int ans = 0, count = 0;
	for (int i=0; i<S.size(); i++) {
		if (S[i] == 'R') {
			count++;
			if (ans < count) ans = count;
		} else {
			count = 0;
		}
	}
	cout << ans;
}