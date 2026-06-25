class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            vector<int> arr;
            int targetCount = 0;
            for (int j = i; j < nums.size(); j++) {
                arr.push_back(nums[j]);
                if (nums[j] == target)
                    targetCount++;

                if (targetCount > arr.size() / 2) {
                    ans++;
                }
            }
        }

        return ans;
    }
};