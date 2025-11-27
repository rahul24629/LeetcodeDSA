class Solution {
public:
    string getSmallestString(int n, int k) {
        string s;
        while(n!=0){
            int ch=k-(n-1)*26;
            if(ch<=0){
                s.push_back('a');
                k--;
                n--;
            }else{
                s.push_back(ch+'a'-1);
                n--;
                k-=ch;
            }
        }
        return s; 
    }
};