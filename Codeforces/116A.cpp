#include <iostream>

using namespace std;

int main() {
	int N;
	int ans=0;
	int curr=0;
	cin >> N;
	for (int i=0; i<N; i++) {
		int a,b;
		cin >> a >> b;
		curr += b-a;
		if (curr > ans) ans = curr;
	}
	cout << ans << endl;
}
