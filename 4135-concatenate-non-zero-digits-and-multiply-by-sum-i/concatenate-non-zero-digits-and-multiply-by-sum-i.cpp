class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long rev=0;

        while(n>0){
            int rem=n%10;
            if(rem!=0){
                sum+=rem;
                rev=rev*10+rem;
            }
            n/=10;
        }

        long long realRev=0;

        while(rev>0){
            int rem=rev%10;

            realRev=realRev*10+rem;

            rev/=10;
        }

        return sum*realRev;
        
    }
};