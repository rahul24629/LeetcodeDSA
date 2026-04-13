class Solution {
public:
    int totalHoursNeeded(vector<int>& piles, int k){  
        int totalSum=0;
        for(int p : piles){                           
            totalSum += (p + k - 1) / k;              
        }
        return totalSum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1;
        int end=*max_element(piles.begin(),piles.end());

        while(st<end){                                
            int mid=st+(end-st)/2;

            if(totalHoursNeeded(piles,mid)<=h){        
                end=mid;
            }else{
                st=mid+1;
            }
        }
        return st;                                    
    }
};