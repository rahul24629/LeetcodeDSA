class NumArray {
    vector<int> tree;
    int n;

    void build(vector<int>& nums, int st, int end, int node){
        if(st == end){
            tree[node] = nums[st];
            return;
        }
        int mid = st + (end - st) / 2;
        build(nums, st, mid, 2*node+1);
        build(nums, mid+1, end, 2*node+2);
        tree[node] = tree[2*node+1] + tree[2*node+2];
    }

    int query(int si, int sj, int qi, int qj, int node){
        if(qj < si || qi > sj) return 0;   // no overlap
        
        if(qi <= si && sj <= qj)          // complete overlap
            return tree[node];

        int mid = si + (sj - si) / 2;
        return query(si, mid, qi, qj, 2*node+1) +
               query(mid+1, sj, qi, qj, 2*node+2);
    }

    void up(int st, int end, int index, int val, int node){
        if(st == end){
            tree[node] = val;
            return;
        }
        int mid = st + (end - st) / 2;
        if(index <= mid)
            up(st, mid, index, val, 2*node+1);
        else
            up(mid+1, end, index, val, 2*node+2);

        tree[node] = tree[2*node+1] + tree[2*node+2];
    }

public:
    NumArray(vector<int>& nums) {
        n = nums.size();
        tree.resize(4*n);
        build(nums, 0, n-1, 0);   // root = 0
    }
    
    void update(int index, int val) {
        up(0, n-1, index, val, 0);
    }
    
    int sumRange(int left, int right) {
        return query(0, n-1, left, right, 0);
    }
};