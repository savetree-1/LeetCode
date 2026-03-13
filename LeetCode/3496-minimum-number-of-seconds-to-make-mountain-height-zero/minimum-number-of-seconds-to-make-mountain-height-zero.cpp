#pragma GCC optimize("Ofast")
#define MAX_HEIGHT 1e18
#define MAX_WORKERS 1e5
class Solution {
public:
    long long minNumberOfSeconds(int h, vector<int>& w) {
        long long l = 1, r = MAX_HEIGHT, ans = r;
        auto canReduce = [&](long long t) {
            long long total = 0;
            for (int wt : w) {
                long long low = 0, high = h;
                for (; low < high;) {
                    long long mid = (low + high + 1) / 2;
                    (static_cast<long long>(wt) * (mid * (mid + 1)) / 2 <= t) ? low = mid : high = mid - 1;}
                total += low;
                if (total >= h) return true;}
            return total >= h;};
        for (; l <= r;) {
            long long m = (l + r) / 2;
            canReduce(m) ? (ans = m, r = m - 1) : (l = m + 1);}
        return ans;}};