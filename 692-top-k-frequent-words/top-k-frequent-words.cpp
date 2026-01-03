class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp; 
        for(auto &it:words) mp[it]++;
        priority_queue<pair<int,string>> pq;
        for(auto &p:mp){
            pq.push({p.second,p.first});
        }
        vector<string> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end(),[&](const string &a,const string &b){
            if(mp[a]!=mp[b]) return mp[a]>mp[b];
            return a<b;
        });
        ans.resize(k);
        return ans;
        
    }
};