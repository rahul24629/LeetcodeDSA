class Solution {
public:
    string simplifyPath(string path) {

        stack<char> st;

        int countDot = 0;

        int i = 0;

        while(i < path.size()) {

            // normal chars
            if(isalnum(path[i]) || path[i] == '_' || path[i] == '-') {

                countDot = 0;
                st.push(path[i]);
                i++;
            }

            // dots
            else if(path[i] == '.') {

                int j = i;

                while(j < path.size() && path[j] == '.') {
                    j++;
                }

                int dots = j - i;

                bool standalone =
                    (i == 0 || path[i - 1] == '/') &&
                    (j == path.size() || path[j] == '/');

                // "."
                if(dots == 1 && standalone) {

                    // ignore
                }

                // ".."
                else if(dots == 2 && standalone) {

                    // remove trailing slash
                    if(!st.empty() && st.top() == '/') {
                        st.pop();
                    }

                    // remove previous directory
                    while(!st.empty() && st.top() != '/') {
                        st.pop();
                    }
                }

                // normal folder name
                else {

                    while(i < j) {
                        st.push('.');
                        i++;
                    }

                    continue;
                }

                countDot = 0;
                i = j;
            }

            // slash
            else if(path[i] == '/') {

                if(st.empty() || st.top() != '/') {
                    st.push('/');
                }

                countDot = 0;
                i++;
            }

            else {
                i++;
            }
        }

        // remove trailing slash
        if(st.size() > 1 && st.top() == '/') {
            st.pop();
        }

        string s = "";

        while(!st.empty()) {

            s += st.top();
            st.pop();
        }

        reverse(s.begin(), s.end());

        if(s.empty()) return "/";

        return s;
    }
};