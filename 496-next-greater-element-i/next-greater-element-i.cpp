class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp; //nums1,-1
        for(int i:nums1) mp[i]=-1;
        stack<int> st;
        for(int i=0;i<nums2.size();i++){
            int curr=nums2[i];
            while(!st.empty() && st.top()<curr){
                mp[st.top()]=curr;
                st.pop();
            }
            if(mp.find(curr)!=mp.end()) st.push(curr);
        }
        vector<int> ans(nums1.size());
        for(int i=0;i<nums1.size();i++) ans[i]=mp[nums1[i]];
        return ans;  
    }
};