class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int currlen=-1;
        int currwidth=-1;
        int area=-1;
        double currdim=-1.0;
        for(auto c:dimensions)
        {
            if(c[0]*c[0]+c[1]*c[1] > currdim) {
                currdim = c[0]*c[0]+c[1]*c[1];
                area = c[0]*c[1];
        }
        else if(c[0]*c[0]+c[1]*c[1]==currdim && c[0]*c[1]>area) 
        {
            area = c[0]*c[1];
        }
        }
        return area;
    }
};