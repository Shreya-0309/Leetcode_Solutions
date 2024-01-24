class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        for(int i = 0; i < arr.size(); i++){
            m[arr[i]]++;
        }
        set<int> s;
        for(auto i : m){
            if(s.count(i.second) > 0) return false;
            s.insert(i.second);
        }
        return true;
    }
};
