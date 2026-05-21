class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<int,int> mp;
        int ans = 0;

        for(int i=0;i<arr1.size();i++){
            string s = to_string(arr1[i]);
            string temp = "";

            for(int j=0;j<s.size();j++){
                temp += s[j];
                mp[stoi(temp)] = 1;
            }
        }

        for(int i=0;i<arr2.size();i++){
            string s = to_string(arr2[i]);
            string temp = "";

            for(int j=0;j<s.size();j++){
                temp += s[j];

                if(mp.find(stoi(temp)) != mp.end()){
                    ans = max(ans, j + 1);
                }
            }
        }

        return ans;
    }
};