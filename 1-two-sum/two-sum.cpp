class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m; //(key,val)
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int comp=target-nums[i];
            if(m.count(comp)){
                ans.push_back(m[comp]);
                ans.push_back(i);
            }
            m[nums[i]]=i;
        }
        return ans;
        
    }
};