class Solution {
public:
    int find_gcd(int a, int b) {
        return (b == 0) ? a : find_gcd(b, a % b);
    }

    vector<string> simplifiedFractions(int n) {
        unordered_set<string> seenFractions;
        vector<string> result;

        for (int i = 2; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                int gcd = find_gcd(i, j);
                string fraction = to_string(j / gcd) + "/" + to_string(i / gcd);

                if (seenFractions.find(fraction) == seenFractions.end()) {
                    seenFractions.insert(fraction);
                    result.push_back(fraction);
                }
            }
        }

        return result;
    }
};
