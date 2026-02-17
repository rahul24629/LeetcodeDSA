class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        int st=0;
        int end=nums.size()-1;
        while(st<end){
            int mid=st+(end-st)/2;
            if(nums[st]%2==0) st++;
            else if(nums[end]%2==1) end--;
            else{
                swap(nums[st],nums[end]);
                st++;
                end--;
            }
        }
        return nums;
    }
};