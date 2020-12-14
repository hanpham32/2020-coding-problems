#include <iostream>

using namespace std;

int main() {
	int n,k;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> k;
		int jump = 0;
		int sum=0;
		// 0+1+2+3+4+5+6
		do {
			for (int j=1; j<=k; j++) {
				if (sum < k) {
					sum += j;
					jump++;
				} else if (sum > k) {
					sum --;
					jump++;
				}
			}
		} while (sum != k);
		cout << "jump: " << jump << endl;
	}
}
