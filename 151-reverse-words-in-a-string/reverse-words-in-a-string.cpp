class Solution {
public:
    string reverseWords(string s) {
        string ans="";

        stack<char> s1;
        stack<char> s2;

        int i=0;

        while(i<s.size()){
            if(isalnum(s[i])){
                s1.push(s[i]);
            }else{
                if(s1.empty()){
                    //ignore
                }else{
                    while(!s1.empty()){
                        s2.push(s1.top());
                        s1.pop();
                    }
                    s2.push(s[i]);
                }
            }
            i++;
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        while(s2.top()==' '){
            s2.pop();

        }

        while(!s2.empty()){
            ans+=s2.top();
            s2.pop();
        }
        return ans;
        
        
    }
};