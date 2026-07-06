class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        int prevL=intervals[0][0];
        int prevR=intervals[0][1];

        int count=0;

        for(int i=1;i<intervals.size();i++){
            int nowL=intervals[i][0];
            int nowR=intervals[i][1];

            if(prevL<nowL){
                if(prevR>=nowR){
                    count++;
                }else{
                    prevL=nowL;
                    prevR=nowR;
                }
            }else{
                if(prevR<nowR){
                    prevL=nowL;
                    prevR=nowR;

                    count++;
                }else{
                    count++;
                }
            }
        }

        return intervals.size()-count;
        
    }
};