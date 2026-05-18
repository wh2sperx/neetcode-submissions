class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> c;
        for(int x : nums) {
            c[x]++;
        }
        int n = nums.size();
        vector<vector<int>> b(n + 1);
        for(auto [n, f] : c) {
            b[f].push_back(n);
        }
        vector<int> a;
        for(int f = n; f >= 1; f--) {
            for(int ns : b[f]) {
                a.push_back(ns);
                if(a.size() == k) {
                    return a;
                }
            }
        }

        return a;
    }
};
