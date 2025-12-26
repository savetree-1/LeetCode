class Solution {
public:
    int bestClosingTime(string cust) {
        int cnt=count(cust.begin(),cust.end(),'Y');
        //vector<pair<int,int>>store;
        //store.push_back({0,cnt});
        map<int,vector<int>>mpp;
        mpp[cnt].push_back(0);
        for(int i=0;i<cust.size();i++)
        {
            if(cust[i]=='Y')
            {
                cnt--;
            }
            else
            {
                cnt++;
            }
            mpp[cnt].push_back(i+1);
        }
        return mpp.begin()->second[0];
    }
};
