class Solution {
public:
    int maxProduct(int n) {
        long maxi=INT_MIN;
        long secMax=INT_MIN;

        while(n>0){
            int rem=n%10;

            if(maxi<rem){
                secMax=maxi;
                maxi=rem;
            }else if(secMax<rem){
                secMax=rem;
            }
            n/=10;
        }
        return maxi*secMax;

        
    }
};