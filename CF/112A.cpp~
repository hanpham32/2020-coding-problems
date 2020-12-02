#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

	long long tots1 = 0;
	long long tots2 = 0;
	for(int i=0; i<s1.size(); i++)
	{
		tots1 += static_cast<int>(s1[i]);
		tots2 += static_cast<int>(s2[i]);
	}
	cout << "s1: " << tots1 << endl;
	cout << "s2: " << tots2 << endl;
	if (tots1 < tots2)
	{
		cout << "-1" << endl;
	} else if (tots1 > tots2) 
	{
		cout << "1" << endl;
	} else 
	{
		cout << "0" << endl;
	}
}

