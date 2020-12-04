#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int FindKey(vector<int> v, int k)
{
	auto it = find(v.begin(), v.end(), k);

	if (it != v.end())
	{
		int index = it - v.begin();
		return index;
	} else 
	{
		return -1;
	}
}
int main()
{
	vector<vector<int>> vect;

	// Add values to table
	for (int i=0; i < 5; i++)
	{
		vector<int> v;
		for (int j=0; j < 5; j++) 
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		vect.push_back(v);
	}

	// Find index of element
	int ite;
	int indexJ;
	int indexI;
	for (int i=0; i<5; i++){
		do {
			int b = FindKey(vect[i], 1);
			if (b != -1){
				indexJ = b+1;
				indexI = i+1;
				break;
			}
			ite++;
		} while (ite < 5);
	}
	// print table
//	for (int i=0; i < 5; i++)
//	{
//		for (int j=0; j < 5; j++)
//		{
//			cout << vect[i][j] << " ";
//		}
//	}

	// Find minMoves
	int ans = 0;
	if (indexI == 3) {
		ans += 0;
	} else if (indexI < 3) {
		ans += 3-indexI;
	} else {
		ans += indexI-3;
	}

	if (indexJ == 3){
		ans += 0;
	} else if (indexJ < 3) {
		ans += 3-indexJ;
	} else {
		ans += indexJ-3;
	}

	cout << ans << endl;
}
