class Solution {
public:
    string removeOuterParentheses(string s) {
        unordered_map<int,int> mp;
        stack<int> st;

        for(int i = 0; i < s.size(); i++) {
            
            if(s[i] == '(') {
                if(st.empty()) {
                    mp[i] = 1; 
                }
                st.push(i);
            }
            else {
                st.pop();

                if(st.empty()) {
                    mp[i] = 1;
                }
            }
        }

        string finalString = "";

        for(int i = 0; i < s.size(); i++) {
            if(mp.find(i) != mp.end()) {
                continue;
            }
            finalString += s[i];
        }

        return finalString;
    }
};