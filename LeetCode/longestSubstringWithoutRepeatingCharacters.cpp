class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int i=0, j=0, maxsize=0;
		set<char> = st;
		while(j < s.length()) {
			if(st.count(s[j]) == 0) {
				st.insert(s[j]);
				maxsize = max(maxsize, (int)st.size());
				j++;
			} else {
				st.erase(s[i]);
				i++;
			}
		}
		return maxsize;
	}
}
