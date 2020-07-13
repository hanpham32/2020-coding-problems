#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int A=0,C=0,G=0,T=0;
	for (int i=0; i<s.size(); i++){
		char c = s.at(i);
		if (c == 'A') {
			A++;
		} else if (c == 'C'){
			C++;
		} else if (c == 'G'){
			G++;
		} else if (c == 'T'){
			T++;
		}
	}
	cout << A << " " << C <<  " " << G << " " << T << endl;
	return 0;	
}
