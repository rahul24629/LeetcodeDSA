class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int count=0;
        stack<int> st;

        for(int i=0;i<nums.size();i++){
            if(!st.empty() && st.top()==nums[i]){
                count++;
            }else{
                st.push(nums[i]);
            }
        }
        return count;
        
    }
};