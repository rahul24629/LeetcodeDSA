class Solution {
public:
    int productOfDigits(int n){
        int prod = 1;
        while(n > 0){
            int rem = n % 10;

            prod*= rem;

            n /= 10;
        }

        return prod;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n+10;i++){
            int prod = productOfDigits(i);

            if(prod % t == 0) return i;
            else continue;
        }

        return -1;
        
    }
};