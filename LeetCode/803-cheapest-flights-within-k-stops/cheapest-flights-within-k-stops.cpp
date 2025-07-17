class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    const int INF=1e9;
    vector<int>dist(n,INF);
    dist[src]=0;
    for(int i=0;i<=k;i++)
    {
        vector<int>temp=dist;
        for(auto &flight:flights)
        {
            int u=flight[0];
            int v=flight[1];
            int w=flight[2];
            if(dist[u]!=1e9 && dist[u]+w<temp[v])
            temp[v]=dist[u]+w;
        }
        dist=temp;
    }
    return(dist[dst]==1e9)?-1:dist[dst];
    }
};