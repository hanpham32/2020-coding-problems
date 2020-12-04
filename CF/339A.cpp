#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main(){
	string s;
	cin >> s;
	vector<int> v;
	for (int i=0; i<s.size(); i+=2) {
		if (isdigit(s[i]) == true) {
			char c = s[i];
			int a = c-48;
			v.push_back(a);
		}
	}

	sort(v.begin(), v.end());

	for (int i=0; i<v.size()-1; i++) {
		cout << v[i] << "+";
	} cout << v[v.size()-1] << endl;
}
