class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maximum=0; 
        for(int i=0;i<k;i++){
            maximum+=nums[i];
        }
        int minimum=0;
        for(int i=n-1;i>=n-k;i--){
            minimum+=nums[i];
        }
        return abs(maximum-minimum);
        
    }
};