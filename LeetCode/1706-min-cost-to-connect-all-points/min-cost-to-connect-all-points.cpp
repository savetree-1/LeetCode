class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size(),cost=0,edges_used=0;
        vector<bool>inMST(n,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        pq.push({0,0});
        while(edges_used<n)
        {
            auto[mincost,u]=pq.top();
            pq.pop();
            if(inMST[u])continue;
            inMST[u]=true;
            cost+=mincost;
            edges_used++;
            for(int v=0;v<n;v++)
            {
                if(!inMST[v])
                {
                    int dist = abs(points[u][0] - points[v][0]) + abs(points[u][1] - points[v][1]);
                    pq.push({dist,v});
                }
            }
        }
        return cost;
    }
};