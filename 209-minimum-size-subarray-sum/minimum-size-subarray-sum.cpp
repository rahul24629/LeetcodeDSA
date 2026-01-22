class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int mn = INT_MAX;
        for (int right = 0; right < n; right++) {
            sum += nums[right];
            while (sum >= target) {
                mn = min(mn, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return (mn == INT_MAX) ? 0 : mn;
    }
};
