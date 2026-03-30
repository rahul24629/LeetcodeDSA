class Solution {
public:
void ltrim(string& s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !isspace(ch);
    }));
}

void rtrim(string& s) {
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), s.end());
}

void trim(string& s) {
    ltrim(s);
    rtrim(s);
}

    int myAtoi(string s) {
    trim(s);
    long long ans = 0; 
    bool neg = false;

    int start = 0;      
    if(s[0]=='-') { neg=true; start=1; }
    else if(s[0]=='+') { start=1; }

    for(int i=start; i<s.size(); i++){
        if(isdigit(s[i])){
            ans = ans*10 + (s[i]-'0');
            if(ans > INT_MAX) return neg ? INT_MIN : INT_MAX;  
        } else break;
    }

    if(neg) ans = -ans;
    return (int)ans;
}
};