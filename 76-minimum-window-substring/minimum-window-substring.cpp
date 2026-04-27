class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";
        unordered_map<char,int> mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        string ans="";
        int count=0;
        int flag=0;
        int flag2=0;
        int j=0;
        int ans2=INT_MAX;
        for(int i=0;i<s.size();i++){  
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
                if(mp[s[i]]==0) count++;
            }
            while(count == mp.size()){  
                if(ans2 > i-flag+1){
                    ans2 = i-flag+1;   
                    flag2=flag;
                    j=i;
                }
                if(mp.find(s[flag])!=mp.end()){
                    if(mp[s[flag]] == 0){  
                        count--;
                    }
                    mp[s[flag]]++;
                }
                flag++;
            }
        }
        if(ans2 == INT_MAX) return "";
        for(int i=flag2;i<=j;i++){
            ans+=s[i];
        }
        return ans;
    }
};