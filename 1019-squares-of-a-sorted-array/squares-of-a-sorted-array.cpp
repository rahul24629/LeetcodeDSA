class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int s=0;
        int e=nums.size()-1;
        int pos=n-1;
        while(s<=e){
            if(abs(nums[s]) < abs(nums[e])){
                ans[pos--]=nums[e]* nums[e];
                e--;
            }else{
                ans[pos--]=nums[s]* nums[s];
                s++;
            }
        }
        return ans;
        
    }
};