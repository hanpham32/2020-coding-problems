#include <bits/stdc++.h>
#include <igloo/igloo_alt.h>

using namespace igloo;

using namespace std;
// void solve {
	
// }

int main(){
	map<string, string> m;
	bool running = true;
	while (running){
		string str;
		cin >> str;
		if (str[0] == '>') {
			string t;
			cin >> t;
			m.insert(pair<string,string>(str.substr(1,str.size()),t));
		} else {
			running = false;
		}
	}
	cout << "Acceptted all inputs" << endl;
}