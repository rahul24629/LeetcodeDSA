class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> broken(26, false);

        for(char c : brokenLetters){
            broken[c - 'a'] = true;
        }

        int ans = 0;
        bool ok = true;

        for(int i = 0; i <= text.size(); i++){
            if(i == text.size() || text[i] == ' '){
                if(ok) ans++;
                ok = true;
            }
            else{
                if(broken[text[i] - 'a']){
                    ok = false;
                }
            }
        }

        return ans;
    }
};