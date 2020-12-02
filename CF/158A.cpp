#include <iostream>

using namespace std;

int main() 
{
	int N, low;
	int ans = 0;
	cin >> N >> low;
	for (int i=0; i<N; i++)
	{
		int a;
		cin >> a;
		if (a >= low) ans++;
	}
	cout << ans;
}
