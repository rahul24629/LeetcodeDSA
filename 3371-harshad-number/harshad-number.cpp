class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int newAns=0;
        int org=x;
        while(x>0){
            int rem=x%10;
            newAns+=rem;
            x/=10;
        }
        return org%newAns==0 ? newAns:-1;
        
    }
};