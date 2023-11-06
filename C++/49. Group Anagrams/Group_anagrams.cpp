class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;
        for (const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            anagramMap[key].push_back(str);
        }
        vector<vector<string>> result;
        for (auto it = anagramMap.begin(); it != anagramMap.end(); ++it) {
            result.push_back(it->second);
        }
        return result;
    }
};
