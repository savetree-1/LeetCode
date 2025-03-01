/*
By   :: savetrees
Used :: Greedy
*/
class Solution {
public:
    int getValidRange(vector<int>& original, vector<vector<int>>& bounds) {
        int n = original.size();
        int minRange = bounds[0][0];
        int maxRange = bounds[0][1];
        for (int i = 1; i < n; ++i) {
            int shift = original[i] - original[0];
            minRange = max(minRange, bounds[i][0] - shift);
            maxRange = min(maxRange, bounds[i][1] - shift);
            if (minRange > maxRange) return 0;
        }
        return maxRange - minRange + 1;
    }
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        return getValidRange(original, bounds);
    }
};