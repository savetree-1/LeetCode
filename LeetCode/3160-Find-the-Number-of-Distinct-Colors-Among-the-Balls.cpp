/*
By   :: savetrees
Used :: Hash Map
*/
class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>ball,color;
        vector<int> ans;
        ans.reserve(queries.size());
        int dfrnt=0;
        for(auto &query:queries) {
            int pos=query[0],c=query[1];
            if(ball.count(pos))
                if(--color[ball[pos]]==0)
                {
                    color.erase(ball[pos]);
                    dfrnt--;
                }
            ball[pos]=c;
            if(++color[c]==1) dfrnt++;
            ans.push_back(dfrnt);
        }
        return ans;
    }
};