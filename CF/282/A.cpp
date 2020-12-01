#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	int ans = 0;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		string s = "";
		cin >> s;
		(s.find("++") != string::npos) ? ans++ : ans--;
	}

	cout << ans << endl;
}
