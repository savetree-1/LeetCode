class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        pair<int,int>prr;
        prr.first=events[0][0];
        prr.second=events[0][1];
        for(int i=1;i<events.size();i++)
        {
            if(events[i][1]-events[i-1][1]>prr.second)
            {
                prr.first=events[i][0];
                prr.second=events[i][1]-events[i-1][1];
            }
            else if(events[i][1]-events[i-1][1]==prr.second)
            {
                if(prr.first>events[i][0])
                {
                    prr.first=events[i][0];
                }  
            }
        }
        return prr.first;
    }
};