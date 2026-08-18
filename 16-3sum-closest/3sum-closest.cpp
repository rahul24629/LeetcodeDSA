class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minAns = INT_MAX;
        int ans = -1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i - 1] == nums[i])
                continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                if (sum == target)
                    return target;
                else {
                    if (abs(target - sum) < minAns) {
                        minAns = abs(target - sum);
                        ans = sum;
                    }
                    if (sum < target) {
                        j++;
                    } else {
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};