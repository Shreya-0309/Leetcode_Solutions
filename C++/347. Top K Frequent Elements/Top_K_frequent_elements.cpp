class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i : nums){
            m[i]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto i:m){
            pq.push({i.second,i.first});
        }
        int j = 0;
        vector<int> v;
        while(k > 0){
            auto i = pq.top();
            pq.pop();
            int temp = i.first;
            v.push_back(i.second);
            k--;
        }
        return v;
    }
};
