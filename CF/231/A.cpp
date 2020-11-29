#include <iostream>

using namespace std;

int main() 
{
	int N; 
	cin >> N;
	int ans;
	for (int i=0; i<N; i++)
	{
		int sum = 0;
		for(int j=0; j<3; j++)
		{
			int a;
			cin >> a;
			sum += a; 
		}
		if (sum >= 2)
		{
			ans++;
		}
	}
	cout << ans << endl;
}