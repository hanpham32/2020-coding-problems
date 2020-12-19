#include <bits/stdc++.h>
using namespace std;
double calc(string startT, string endT, string breakT) {
	int hour = stoi(startT.substr(0, (endT.find(':')))) - stoi(startT.substr(0, (startT.find(':'))));
	cout << stoi(startT.substr(0, (endT.find(':')))) << endl;
	int minute = stoi(startT.substr(endT.find(':'), endT.size())) - stoi(startT.substr(startT.find(':'), startT.size()));
	if (minute < 0) {
		minute = 60 - abs(minute);
		hour--;
	}
	minute = minute - stoi(breakT);
	if (minute < 0) {
		minute = 60 - abs(minute);
		hour--;
	}
	string s = to_string(hour) + "." + to_string(minute / 60);
	return stod(s);
}	

int main() {
	cout << calc("9:15", "18:46", "20") << endl;
}
