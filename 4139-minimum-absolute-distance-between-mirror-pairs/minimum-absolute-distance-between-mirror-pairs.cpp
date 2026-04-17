class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        while(n != 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int> mp; // value -> index

        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int rev = reverse(nums[i]);

            if(mp.find(nums[i]) != mp.end()){
                ans = min(ans, abs(i - mp[nums[i]]));
            }

            mp[reverse(nums[i])] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};