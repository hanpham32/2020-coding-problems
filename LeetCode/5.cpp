class Solution {
public:
	string longestPalindrome(string s) {
		int first = 0, last = 1;
		for (int i=0; i<s.size();){
			int j=i, k=i;
			while (k<s.size()-1 && s[k+1] == s[k]) ++k;
			i = k+1;
			while (k < s.size()-1 && j > 0 && s[k+1] == s[j-1]) {++k; --j;} // expand
			int currLen = k - j + 1;
			if (currLen > last) {first = j; last = currLen;}
		}
		return s.substr(first, last);
	}
}
