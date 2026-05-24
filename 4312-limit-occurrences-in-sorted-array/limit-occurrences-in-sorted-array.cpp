class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int i=0;
        int count=0;
        int prev=-1;

        vector<int> ans;

        while(i<nums.size()){
            if(prev!=nums[i]){
                prev=nums[i];
                count=1;
                if(count<=k){
                    ans.push_back(nums[i]);
                }
                
            }else{
                count++;
                if(count<=k){
                    ans.push_back(nums[i]);
                }
            }
            i++;
        }
        return ans;
        
    }
};