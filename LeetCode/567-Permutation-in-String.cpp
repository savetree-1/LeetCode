/*
By    :-: savetrees
Used  :-: Sliding Window Approach
*/
auto _ = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    bool checkInclusion(string_view s1, string_view s2) {
        int n = s1.length(), m = s2.length();
        if (m < n) return false;
        int s1_counts[26], s2_counts[26];
        memset(&s1_counts, 0, sizeof(s1_counts));
        memset(&s2_counts, 0, sizeof(s2_counts));
        for (char ch : s1) ++s1_counts[ch - 'a'];
        for (char ch : s2.substr(0, n)) ++s2_counts[ch - 'a'];
        int differences = 0;
        for (int i = 0; i < 26; ++i)
            if ((s2_counts[i] -= s1_counts[i]) != 0) ++differences;
        if (differences == 0) return true;
        for (int i = n; i < m; ++i) {
            int& old_count = s2_counts[s2[i - n] - 'a'];
            int& new_count = s2_counts[s2[i] - 'a'];
            if (old_count == 0) ++differences;
            if (--old_count == 0) --differences;
            if (new_count == 0) ++differences;
            if (++new_count == 0) --differences;
            if (differences == 0) return true;
        }
        return false;
    }
};