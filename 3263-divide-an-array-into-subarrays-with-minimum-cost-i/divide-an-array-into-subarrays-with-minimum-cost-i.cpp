class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int count=INT_MAX;
        for(int i=1;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                count=min(count,nums[i]+nums[j]);
            }
        }
        return count+nums[0];
    }
};