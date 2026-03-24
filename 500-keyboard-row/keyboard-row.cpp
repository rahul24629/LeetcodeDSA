class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        unordered_map<char,int> mp;

        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";

        for(char c : r1) mp[c] = 1;
        for(char c : r2) mp[c] = 2;
        for(char c : r3) mp[c] = 3;

        vector<string> ans;

        for(string word : words){

            string wo = word;

            // convert to lowercase
            for(char &c : wo){
                c = tolower(c);
            }

            bool ok = true;

            for(int i = 1; i < wo.size(); i++){

                if(mp[wo[i-1]] != mp[wo[i]]){
                    ok = false;
                    break;
                }
            }

            if(ok){
                ans.push_back(word);
            }
        }

        return ans;
    }
};