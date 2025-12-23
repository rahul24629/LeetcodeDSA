class Solution {
public:
    class Car {
    public:
        int idx;
        int distSq;
        Car(int idx, int distSq) {
            this->idx = idx;
            this->distSq = distSq;
        }
        bool operator<(const Car &obj) const {
            return this->distSq > obj.distSq;
        }
    };
    vector<vector<int>> nearBy(vector<vector<int>> &points, int k) {
        vector<Car> cars;
        vector<vector<int>> ans;
        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            int distSq = x * x + y * y;
            cars.push_back(Car(i, distSq));
        }
        priority_queue<Car> pq(cars.begin(), cars.end());
        for (int i = 0; i < k; i++) {
            int idx = pq.top().idx;
            pq.pop();
            ans.push_back(points[idx]);
        }
        return ans;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        return nearBy(points, k);
    }
};
