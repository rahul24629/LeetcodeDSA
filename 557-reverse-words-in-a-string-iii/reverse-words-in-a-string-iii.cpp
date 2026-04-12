class Solution {
public:
    string reverseWords(string s) {
        int st=0;
        int end=0;
        int prev=0;
        while(end!=s.size()){
            while(end<s.size() && s[end]!=' '){
                prev=end;
                end++;
            }
            while(st<=prev){
                swap(s[st],s[prev]);
                st++;
                prev--;
            }
            if(end<s.size()){
                end++; 
                st=end;
            }

        }
        return s;
        
    }
};