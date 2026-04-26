class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        if(nums.size()<=2) return nums;

        vector<int> leftMax(nums.size());
        vector<int> rightMax(nums.size());

        vector<int> ans;
        ans.push_back(nums[0]);

        leftMax[0]=nums[0];
        rightMax[nums.size()-1]=nums[nums.size()-1];

        for(int i=1;i<nums.size();i++){
            leftMax[i]=max(nums[i],leftMax[i-1]);
        }

        for(int i=nums.size()-2;i>=0;i--){
            rightMax[i]=max(nums[i],rightMax[i+1]);
        }

        for(int i=1;i<nums.size()-1;i++){
    if(nums[i] > leftMax[i-1] || nums[i] > rightMax[i+1]){
        ans.push_back(nums[i]);
    }
}
        ans.push_back(nums[nums.size()-1]);
        return ans;
    }
};