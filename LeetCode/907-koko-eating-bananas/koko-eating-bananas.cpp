class Solution {
public:
    bool check(vector<int>& piles, int h, int k) {
        if (k <= 0) return false;
        long long hours = 0;
        for (int num : piles)
            hours += (num + k - 1) / k; // safer than ceil
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(piles, h, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
