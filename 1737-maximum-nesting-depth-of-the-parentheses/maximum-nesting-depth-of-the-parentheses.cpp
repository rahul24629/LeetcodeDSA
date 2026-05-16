class Solution {
public:
    int maxDepth(string s) {
        int counter=0;
        int maxCounter=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') counter++;
            maxCounter=max(maxCounter,counter);
            if(s[i]==')') counter--;

        }
        return maxCounter;
        
    }
};