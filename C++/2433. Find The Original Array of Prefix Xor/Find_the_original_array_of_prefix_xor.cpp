class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int pre_xor = 0;
        for(int i = 1; i < pref.size(); i++) {
            pre_xor ^= pref[i - 1];
            pref[i] ^= pre_xor;
        }
        return pref;
    }
};
