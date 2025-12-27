class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m; //arr[i],freq
        for(int i=0;i<n;i++){
            if(m.count(nums[i])) m[nums[i]]++;
            else m[nums[i]]=1;
        }
        vector<int> ans;
        for(pair<int,int>p:m){
            if(p.second >n/3) ans.push_back(p.first);
        }
        return ans;  
    }
};