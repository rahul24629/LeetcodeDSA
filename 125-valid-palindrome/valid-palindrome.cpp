class Solution {
public:
    bool isPalindrome(string str) {
        int n=str.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(isalnum(str[i])){
                str[j]=str[i];
                str[j]=tolower(str[j]);
                j++;
            }
        }
        str.resize(j);
        int st=0;
        int end=j-1;
        while(st<end){
            if(str[st]!=str[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};