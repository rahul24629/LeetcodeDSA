class Solution {
public:
    string reverseOnlyLetters(string s) {
        int st=0;
        int end=s.size()-1;
        while(st<end){
            int mid=st+(end-st)/2;
            if(isalpha(s[st]) && isalpha(s[end])){
                swap(s[st],s[end]);
                st++;
                end--;
            }else if(isalpha(s[st]) && !isalpha(s[end])){
                end--;
            }else{
                st++;
            }
        }
        return s;
    }
};