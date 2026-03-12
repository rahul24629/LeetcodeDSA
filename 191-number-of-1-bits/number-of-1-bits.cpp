class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n>0){
            int last=n&1;
            if(last){
                count+=last;
            }
            n>>=1;

        }
        return count;
        
    }
};