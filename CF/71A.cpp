#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i=0; i<N; i++)
	{
		string ans = "";
		string l;
		cin >> l;
		if (l.size() > 10)
		{
			ans += l.substr(0,1);
			ans += to_string(l.size()-2);
			ans += l.substr(l.size()-1, l.size()-1);
			cout << ans << endl;
		} else {
			cout << l << endl;
		}
	}
}
