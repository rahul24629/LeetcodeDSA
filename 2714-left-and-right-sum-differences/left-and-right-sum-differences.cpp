class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum(nums.size(), 0);
        vector<int> rightSum(nums.size(), 0);
        int sum=0;
        for(int i=1;i<nums.size();i++){
            sum+=nums[i-1];
            leftSum[i]=sum;
        }
        sum=0;

        for(int i=nums.size()-2;i>=0;i--){
            sum+=nums[i+1];
            rightSum[i]=sum;
        }

        for(int i=0;i<nums.size();i++){
            leftSum[i]=abs(leftSum[i]-rightSum[i]);
        }
        return leftSum;
        
    }
};