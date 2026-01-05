class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long totalSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }
        long long count=0;
        long long sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            if(sum>=totalSum-sum){
                count++;
            }
        }
        return count;  
    }
};