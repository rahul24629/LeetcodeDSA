class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1) return false;

        if(nums.size()==2 && nums[nums.size()-2]==nums[nums.size()-1] && nums[nums.size()-1]==nums.size()-1){
            return true;
        }

        if(nums.size()==3 && nums[nums.size()-1]==nums[0]) return false;

        for(int i=1;i<nums.size()-2;i++){
            if(nums[i-1]==nums[i]) return false;
        }

        if(nums[nums.size()-2]==nums[nums.size()-1] && nums[nums.size()-1]==nums.size()-1){
            return true;
        }

        return false;

        
    }
};