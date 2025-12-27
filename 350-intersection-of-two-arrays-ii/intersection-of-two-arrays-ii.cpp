class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m; 
        for(int el:nums1){
            m[el]++;
        }
        vector<int> ans;
        for(int x:nums2){
            if(m[x]>0){
                ans.push_back(x);
                m[x]--;
            }
        }
        return ans;
    }
};