class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> v; 
        for(int i = 0; i < mat.size(); i++) {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) count++; 
                else break;
            }
            v.push_back({count, i});
        }
        sort(v.begin(), v.end());
        vector<int> result;
        for(int i = 0; i < k; i++) result.push_back(v[i].second); 
        return result;
    }
};
