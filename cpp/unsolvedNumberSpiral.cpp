#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n, count = 1, yGrid=1, xGrid=1, x,y;
	int coin = 1, j=2;
	cin >> n;
	bool running = true;
	for (int i=0; i<n; i++)
	{
		cin >> y; 
		cin >> x;
		cout << "X is: " << x << endl;
		cout << "Y is: " << y << endl;
		if (y == 1 && x==1) {
			cout << count;
		} else {
			xGrid++; count++;
			while (running)
			{
				if (yGrid == y && xGrid == x){
					running = false;
				}else {
					if (yGrid < xGrid) {
						cout << "yGrid < xGrid" << endl;
						cout << "yGrid: " << yGrid << endl;
						cout << "xGrid: " << xGrid << endl;
						yGrid++;
						count++;
					} else if (yGrid == xGrid){
						xGrid++;
						count++;
					}
					if(xGrid < yGrid){
						cout << "xGrid < yGrid" << endl;
						cout << "yGrid: " << yGrid << endl;
						cout << "xGrid: " << xGrid << endl;
						xGrid++;
						count++;
					} else if (xGrid == yGrid) {
						yGrid++;
						count++;
					}
				}
				cout << "current count: " << count << endl;
			}
			cout << count;
			count = 1; // reseting count	
		}
	}
}
