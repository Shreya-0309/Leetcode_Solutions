class Solution {
public:
    int countBits(int n) {
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }

    void sortArray(vector<int> &arr, vector<int> &v, int n) {
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (v[j] > v[j + 1] || (v[j] == v[j + 1] && arr[j] > arr[j + 1])) {
                    swap(arr[j], arr[j + 1]);
                    swap(v[j], v[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
        }
    }

    vector<int> sortByBits(vector<int> &arr) {
        int n = arr.size();
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) {
            v[i] = countBits(arr[i]);
        }
        sortArray(arr, v, n);
        return arr;
    }
};
