#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	string s;
	cin >> s;
	vector<char> v;
	int count = 0, ans = 0;
	int i=0;
	for ( ; i<s.size(); i++) {
		char c = s[i];
		if(find(v.begin(), v.end(), c) == v.end()) {
			v.push_back(c);
			count++;
		} else {
			ans = (count > ans) ? count : ans;
			auto it = find(v.begin(), v.end(), c);
			i = (it - v.begin()) + 1;
			count = 1;
			v.clear();
			v.push_back(c);
		}
	}
	ans = (count > ans) ? count : ans;
	cout << ans << endl;

}
