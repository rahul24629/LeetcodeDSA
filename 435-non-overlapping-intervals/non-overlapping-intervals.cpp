class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a, auto &b) {return a[1]<b[1];});
        int lastEnd=intervals[0][1];
        int removals=0;
        for(int i=1;i<intervals.size();i++){
            if(lastEnd>intervals[i][0]){
                removals++;
            }else{
                lastEnd=intervals[i][1];
            }
        }
        return removals;
        
    }
};