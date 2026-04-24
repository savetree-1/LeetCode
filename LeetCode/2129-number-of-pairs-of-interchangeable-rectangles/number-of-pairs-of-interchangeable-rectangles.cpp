class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        vector<double>ratio;
        for(int i=0;i<rectangles.size();i++)
        {
            ratio.push_back(1.0*rectangles[i][0]/rectangles[i][1]);
        }
        unordered_map<double,int>mpp;
        for(int i=0;i<ratio.size();i++)
        {
            mpp[ratio[i]]++;
        }
        long long sum=0;
        for(auto &s:mpp)
        {
            int n=s.second;
            sum+=(1LL*n*(n-1))/2;
        }
        return sum;

    }
};