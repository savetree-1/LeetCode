class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
       for(int i=1;i<c.size()-1;i++)
       {
        int prod1=(c[i+1][0]-c[i][0])*(c[i][1]-c[i-1][1]);
        int prod2=(c[i+1][1]-c[i][1])*(c[i][0]-c[i-1][0]);
        if(prod1!=prod2)return false;
       }
       return true;
    }
};