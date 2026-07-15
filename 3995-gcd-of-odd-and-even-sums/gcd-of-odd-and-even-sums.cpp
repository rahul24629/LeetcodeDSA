class Solution {
public:
    int gcd(int odd, int even){
        while(even!=0){
            int rem=odd % even;

            odd=even;
            even=rem;
        }

        return odd;
        
    }
    int gcdOfOddEvenSums(int n) {
        int size=2*n;

        int odd=0;
        int even=0;

        for(int i=1;i<=size;i++){
            if(i%2==0){
                even+=i;
            }else{
                odd+=i;
            }
        }

        return gcd(odd,even);
        
    }
};