class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string ref=s+s;
        
        for(int i=0; i<s.size(); i++){
            int j=0;
            int k=i;
            while(k<ref.size() && j<goal.size() && ref[k]==goal[j]){
                k++;
                j++;
            }
            if(j==goal.size()) return true;
        }
        return false;
    }
};