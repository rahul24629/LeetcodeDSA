class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int i=0;

        stack<int> st;

        while(i<tokens.size()){
            if(tokens[i] != "+" && tokens[i] != "-" &&
               tokens[i] != "*" && tokens[i] != "/") {

                st.push(stoi(tokens[i]));

            }else{
                if(!st.empty()){
                    int sec=st.top();
                    st.pop();
                    int first=st.top();
                    st.pop();

                    if(tokens[i]=="+"){
                        st.push(first+sec);
                    }else if(tokens[i]=="-"){
                        st.push(first-sec);
                    }else if(tokens[i]=="*"){
                        st.push(first*sec);
                    }else{
                        st.push(first/sec);
                    }
                }
            }
            i++;
        }
        return st.top();

        
    }
};