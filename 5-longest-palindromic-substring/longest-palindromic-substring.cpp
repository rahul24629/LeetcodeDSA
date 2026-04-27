class Solution {
public:
    string longestPalindrome(string s) {
        int maxi = 0;
        int l = 0, r = 0;
        for(int i = 0; i < s.size(); i++) {
            int left = i, right = i;
            while(left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            int len = right - left - 1;
            if(maxi < len) {
                maxi = len;
                l = left + 1;
                r = right - 1;
            }
            left = i;
            right = i + 1;

            while(left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }

            len = right - left - 1;
            if(maxi < len) {
                maxi = len;
                l = left + 1;
                r = right - 1;
            }
        }
        string ans = "";
        for(int i = l; i <= r; i++) {
            ans += s[i];
        }
        return ans;
    }
};