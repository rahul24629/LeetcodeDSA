class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> strs2=strs;
        
        for(auto &s : strs2) sort(s.begin(), s.end());

        unordered_map<string,vector<int>> mp;//string and it's idx

        for(int i = 0; i < strs.size(); i++) {
                mp[strs2[i]].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto &it : mp) {
            vector<string> subArray;
            vector<int> &vec = it.second;
            for(int idx : vec) {
                subArray.push_back(strs[idx]);
            }
            ans.push_back(subArray);
        }
        return ans;

        
    }
};