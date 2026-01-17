class Solution {
public:
    long long overlapSquareArea(
        int ax1, int ay1, int ax2, int ay2,
        int bx1, int by1, int bx2, int by2
    ) {
        int w = min(ax2, bx2) - max(ax1, bx1);
        if (w <= 0) return 0;

        int h = min(ay2, by2) - max(ay1, by1);
        if (h <= 0) return 0;

        long long side = min(w, h);
        return side * side;
    }

    long long largestSquareArea(
        vector<vector<int>>& bottomLeft,
        vector<vector<int>>& topRight
    ) {
        int n = bottomLeft.size();
        long long maxArea = 0;

        for (int i = 0; i < n; i++) {
            int ax1 = bottomLeft[i][0];
            int ay1 = bottomLeft[i][1];
            int ax2 = topRight[i][0];
            int ay2 = topRight[i][1];

            for (int j = i + 1; j < n; j++) {
                long long area = overlapSquareArea(
                    ax1, ay1, ax2, ay2,
                    bottomLeft[j][0], bottomLeft[j][1],
                    topRight[j][0], topRight[j][1]
                );

                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};