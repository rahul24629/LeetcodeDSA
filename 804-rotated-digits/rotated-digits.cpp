class Solution {
public:
    int rotated(int rem){
        if(rem==2) return 5;
        if(rem==5) return 2;
        if(rem==6) return 9;
        if(rem==9) return 6;
        return rem;
    }
    int converted(int n){
        string s = to_string(n);
        string res = "";
        for(char c : s){
            int d = c - '0';
            if(d==3 || d==4 || d==7) return -1;
            int r = rotated(d);
            res += (r + '0');
        }
        return stoi(res);
    }
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            int val = converted(i);
            if(val != -1 && val != i){
                count++;
            }
        }
        return count;
    }
};