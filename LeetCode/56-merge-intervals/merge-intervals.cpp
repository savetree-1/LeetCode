class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ints;

        sort(intervals.begin(), intervals.end());

        int curr_start = intervals[0][0];
        int curr_end = intervals[0][1];

        for (int index = 1; index < intervals.size(); index++) {
            if (intervals[index][0] <= curr_end) {
                curr_end = max(curr_end, intervals[index][1]);
            } else {
                ints.push_back({curr_start, curr_end});

                curr_start = intervals[index][0];
                curr_end = intervals[index][1];
            }
        }

        ints.push_back({curr_start, curr_end});

        return ints;
    }
};