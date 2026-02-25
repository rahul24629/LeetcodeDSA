class Solution {
public:
    static int countBits(int x){
        int cnt=0;
        while(x){
            cnt+=x&1;
            x>>=1;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[](int &a, int &b){
            int ca=countBits(a);
            int cb=countBits(b);
            return ca==cb?a<b:ca<cb;
        });
        return arr;
    }
};