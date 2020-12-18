#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int T, n, k;
	cin >> T;
	for (int t=0; t<T; t++){
		cin >> n >> k;
		string ans = "";
		string tempPalind = "";
		if (k <= 1) {
			for (int i=97; i<=97+n; i++) {
				ans += char(i);
			}
		}
		for(int i=97; i<k+97; i++) {
			ans += char(i);
		}
		tempPalind = ans;
		reverse(tempPalind.begin(), tempPalind.end());
		ans = tempPalind += ans;

		// creating pre-string
		string temp = "";
		int a = n-(k*2);
		int count = 97;
		while (a >= 0){
			temp += char(97);
			count++;
			a--;
		}
		ans = temp += ans;
		cout << ans << "\n";
	}
}
