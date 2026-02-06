class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i=1;
        int count=0;
        while(i<nums.size()){
            if(nums[i]<=nums[i-1]){
                nums[i]=nums[i]+1;
                count++;
            }else{
                i++;
            }
        }
        return count;
    }
};