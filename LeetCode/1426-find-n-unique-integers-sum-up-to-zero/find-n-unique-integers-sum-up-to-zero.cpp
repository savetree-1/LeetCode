class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;
        for(int i=n/2;i>=1;i--)
        {
            res.push_back(i);
            res.push_back(-i);
        }
        if(n%2!=0)
        {
            res.push_back(0);
        }
        return res;
    }
};