#include <iostream>

using namespace std;

int main() {
	int k,n,w;
	cin >> k >> n >> w;
	int totalDue = 0;
	for (int i=1; i<=w; i++) {
		totalDue += k*i;
	}
	(totalDue > n) ? cout << totalDue - n : cout << "0";
}
