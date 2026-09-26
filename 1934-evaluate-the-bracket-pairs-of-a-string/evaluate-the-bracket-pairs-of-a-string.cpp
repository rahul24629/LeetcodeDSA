class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans = "";
        int i = 0;
        unordered_map<string, string> mp;

        for (auto& x : knowledge) {
            mp[x[0]] = x[1];
        }

        while (i < s.size()) {
            string a = "";
            if (s[i] == '(') {
                while (s[i] != ')') {
                    if (s[i] != '(') {
                        a += s[i];
                    }
                    i++;
                }
                i++;

                int k = knowledge.size();
                bool found = false;

                if (mp.find(a) != mp.end()) {
                    ans += mp[a];
                } else {
                    ans += '?';
                }

            } else {
                ans += s[i];
                i++;
            }
        }
        return ans;
    }
};