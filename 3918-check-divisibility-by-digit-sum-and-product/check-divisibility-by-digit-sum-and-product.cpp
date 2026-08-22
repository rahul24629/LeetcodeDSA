class Solution {
public:
    int digSum(int n){
        int digitSum=0;
        while(n>0){
            int rem= n%10;
            digitSum+=rem;
            n/=10;
        }
        return digitSum;
    }

    int digProd(int n){
        int digitProd=1;

        while(n>0){
            while(n>0){
                int rem= n%10;
                digitProd*=rem;
                n/=10;
            }
        }
        return digitProd;
    }
    bool checkDivisibility(int n) {
        int digitSum=digSum(n);
        int digitProduct= digProd(n);

        return n%(digitSum+digitProduct)==0;
        
    }
};