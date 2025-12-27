class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        vector<long long> end(n, 0);
        vector<int> cnt(n, 0);

        for (auto &m : meetings) {
            long long s = m[0], e = m[1];
            long long dur = e - s;

            int room = 0;
            long long best = end[0];

            for (int i = 0; i < n; i++) {
                if (end[i] <= s) {
                    room = i;
                    break;
                }
                if (end[i] < best) {
                    best = end[i];
                    room = i;
                }
            }

            if (end[room] <= s)
                end[room] = e;
            else
                end[room] += dur;

            cnt[room]++;
        }

        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (cnt[i] > cnt[ans]) ans = i;
        }
        return ans;
    }
};
