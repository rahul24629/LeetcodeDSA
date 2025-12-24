class Solution {
public:
    class Soldiers {
    public:
        int idx;
        int count;
        Soldiers(int idx, int count) {
            this->idx = idx;
            this->count = count;
        }
        bool operator < (const Soldiers &obj) const {
            if (this->count == obj.count) {
                return this->idx > obj.idx;   
            }
            return this->count > obj.count;   
        }
    };

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<Soldiers> rows;

        for (int i = 0; i < mat.size(); i++) {
            int count = 0;
            for (int j = 0; j < mat[i].size() && mat[i][j] == 1; j++) {
                count++;
            }
            rows.push_back(Soldiers(i, count));
        }
        priority_queue<Soldiers> pq(rows.begin(),rows.end());
        vector<int> answer;
        for (int i = 0; i < k; i++) {
            answer.push_back(pq.top().idx);
            pq.pop();
        }
        return answer;
    }
};
