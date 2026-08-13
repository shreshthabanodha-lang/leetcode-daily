class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        if ((long long)m * k > n)
            return -1;

        int low = INT_MAX;
        int high = INT_MIN;

        for (int i = 0; i < n; i++) {
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int cnt = 0;
            int bouquets = 0;

            for (int i = 0; i < n; i++) {

                if (bloomDay[i] <= mid) {
                    cnt++;

                    if (cnt == k) {
                        bouquets++;
                        cnt = 0;
                    }
                }
                else {
                    cnt = 0;
                }
            }

            if (bouquets >= m) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};