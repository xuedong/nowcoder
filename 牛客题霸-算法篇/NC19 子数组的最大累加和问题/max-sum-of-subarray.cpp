class Solution {
public:
    /**
     * max sum of the subarray
     * @param arr int整型vector the array
     * @return int整型
     */
    int maxsumofSubarray(vector<int>& arr) {
        // write code here
        int n = arr.size();
        int best = 0;
        int current = 0;
        for (int i=0; i<n; i++) {
            current += arr[i];
            if (current > 0) {
                best = max(best, current);
            } else {
                current = 0;
            }
        }
        best = max(best, current);
        return best;
    }
};

