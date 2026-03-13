class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        
        for(string word : words){
            
            unordered_map<char,char> m1;
            unordered_map<char,char> m2;
            
            bool ok = true;
            
            for(int i=0;i<word.size();i++){
                
                char w = word[i];
                char p = pattern[i];
                
                if(m1.count(w) && m1[w] != p){
                    ok = false;
                    break;
                }
                
                if(m2.count(p) && m2[p] != w){
                    ok = false;
                    break;
                }
                
                m1[w] = p;
                m2[p] = w;
            }
            
            if(ok) ans.push_back(word);
        }
        
        return ans;
    }
};