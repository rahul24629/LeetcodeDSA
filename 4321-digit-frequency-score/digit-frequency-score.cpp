class Solution {
public:
    int digitFrequencyScore(int n) {
        string s= to_string(n);
        unordered_map<char, int> mp;

        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()) mp[s[i]]++;
            else mp[s[i]]=1;
        }

        int ans=0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                ans+=(s[i]-'0')*mp[s[i]];
                mp.erase(s[i]);
            }
        }
        return ans;
        
    }
};