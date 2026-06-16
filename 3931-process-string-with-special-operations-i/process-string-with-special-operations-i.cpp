class Solution {
public:
    string processStr(string s) {
        string result="";
        for(char c:s){
            if(islower(c)){
                result+=c;
            }else if(c=='*' && !result.empty()){
                result.pop_back();
            }else if(c=='#' && !result.empty()){
                string dup=result;
                result+=dup;
            }else if(c=='%' && !result.empty()){
                reverse(result.begin(), result.end());
            }
        }
        return result;
        
    }
};