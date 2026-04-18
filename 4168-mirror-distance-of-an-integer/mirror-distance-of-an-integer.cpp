class Solution {
public:
    int mirrorDistance(int n) {
        if(n<10) return 0;
        int org=n;
        int ans=0;
        while(n>0){
            int rem = n%10;
            n/=10;
            ans=ans*10 +rem;
        }
        return abs(org-ans);
        
    }
};