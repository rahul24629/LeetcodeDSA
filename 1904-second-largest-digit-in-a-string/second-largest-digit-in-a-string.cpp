class Solution {
public:
    int secondHighest(string s) {
        int largest=-1;
        int secLargest=-1;
        for(char ch:s){
            if(isdigit(ch)){
                int num=ch-'0';
                if(num>largest){
                    secLargest=largest;
                    largest=num;
                }else if(num>secLargest && num<largest){
                    secLargest=num;
                }
            }else{
                continue;
            }
        }
        return secLargest;
        
    }
};