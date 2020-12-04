#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, ans=0;
	string str;
	cin >> n;
	cin >> str;
	for (int i=0; i<n-1; i++){
		if (str[i] == str[i+1]) {
			// str.erase(str.begin()+i, str.begin()+i+1);
			ans++;
		}
	} cout << ans << endl;
}
