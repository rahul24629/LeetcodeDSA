class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans(nums.size()*2);
        int j=0;
        for(int i=0;i<nums.size();i++){
            ans[j++]=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[j++]=nums[i];
        }
        return ans;
        
    }
};