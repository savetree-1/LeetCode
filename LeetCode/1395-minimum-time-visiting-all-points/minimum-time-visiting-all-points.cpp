class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int tim = 0; 
        for(int idx = 0; idx < points.size() - 1; idx++) {
            int dx = abs(points[idx+1][0] - points[idx][0]);
            int dy = abs(points[idx+1][1] - points[idx][1]);
            tim += max(dx, dy);
        } 
        return tim;
    }
};
