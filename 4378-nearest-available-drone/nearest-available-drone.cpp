class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mini=INT_MAX;
        int ans=-1;
        for(int i=0;i<drones.size();i++){
            int tar=abs(drones[i][0]-target[0]) + abs(drones[i][1] - target[1]);
            if(tar<= drones[i][2] && tar<mini){
                mini=tar;
                ans=i;
            }
        }
        return ans;
        
    }
};