class Solution {
public:
	double findMedianSortedArrays(vector<int>& numw1, vector<int>& nums2) {
		vector<int> newArr;
		newArr.reserve(nums1.size() + nums2.size());
		newArr.insert(newArr.end(), nums1.begin(), nums1.end());
		newArr.insert(newArr.end(), nums2.begin(), nums2.end());
		sort(newArr.begin(), newArr.end());
		int n = newArr.size() / 2;
		if (newArr.size() % 2 == 0) {
			float ans = ((float)newArr[n] + (float)newArr[n-1])/2;
			return ans;
		} else {
			return newArr[n];
		}
	}
}
