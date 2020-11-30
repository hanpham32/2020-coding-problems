#include <iostream>

using namespace std;

int main() 
{
	int N, a, b, c; 
	cin >> N;
	int ans=0;
	for (int i=0; i<N; i++)
	{
		cin >> a >> b >> c;
		if (a+b+c >= 2) ans++;
	}

	cout << ans << endl;
}