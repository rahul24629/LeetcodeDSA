class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> s;
        for(int el:nums){
            s[el]++;
        }
        int ans=0;
        for(auto &p:s){
            if(p.second==1) ans+=p.first;
        }
        return ans;
    }
};