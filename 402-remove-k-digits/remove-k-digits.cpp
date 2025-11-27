class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.empty()) return "0";
        string s = "";
        for(int i = 0; i < num.size(); i++){
            char curr = num[i];
            while(!s.empty() && k > 0 && s.back() > curr){
                s.pop_back();
                k--;
            }
            if(!s.empty() || curr != '0')  
                s.push_back(curr);
        }
        while(k > 0 && !s.empty()){
            s.pop_back();
            k--;
        }
        if(s.empty()) return "0";
        return s;
    }
};
