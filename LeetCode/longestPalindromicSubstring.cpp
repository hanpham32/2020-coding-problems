class Solution {
public:
    string longestPalindrome(string s) {
        int first = 0, last = 1;
        for (int i=0; i<s.size(); ){
            int j = i, k = i;
            
            // Skip duplicates in the middle
            while (k+1 < s.size() && s[k+1] == s[k]) { k++;}
            i= k+1;
            
            while (j-1 >= 0 && k + 1 < s.length() && s[j-1] == s[k+1]) {
                j--;
                k++;
            }
            
            int currLen = k - j +1;
            if(currLen > last) {
                first = j;
                last = currLen;
            }
        }
        return s.substr(first, last);
    }
};