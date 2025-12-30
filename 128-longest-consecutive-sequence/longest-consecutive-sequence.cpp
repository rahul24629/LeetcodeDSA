class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxLen = 0;
        for (int el : nums) {
            mp[el] = 1;
        }
        for (auto it : mp) {
            int num = it.first;
            if (mp.count(num - 1) == 0) {
                int curr = num;
                int len = 1;
                while (mp.count(curr + 1)) {
                    curr++;
                    len++;
                }
                maxLen = max(maxLen, len);
            }
        }
        return maxLen;
    }
};
