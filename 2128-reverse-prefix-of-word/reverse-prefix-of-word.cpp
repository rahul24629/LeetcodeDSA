class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        int i = 0;

        while (i < word.size() && word[i] != ch) {
            st.push(word[i]);
            i++;
        }

        if (i == word.size()) {
            return word;
        }

        string ans = "";
        ans += ch;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        for (int j = i + 1; j < word.size(); j++) {
            ans += word[j];
        }

        return ans;
    }
};