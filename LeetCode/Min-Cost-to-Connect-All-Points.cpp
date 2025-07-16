class Solution {
public:
    class DSU
    {
        public:
        vector<int>parent,rank;
        DSU(int n)
        {
            parent.resize(n+1);
            rank.resize(n+1,0);
            for(int i=0;i<=n;i++)parent[i]=i;
        }
        int find(int u)
        {
            if(parent[u]==u)return u;
            return parent[u]=find(parent[u]);
        }
        bool unite(int u,int v)
        {
            int pu=find(u);
            int pv=find(v);
            if(pu==pv)return false;
            if(rank[pu]<rank[pv])parent[pu]=pv;
            else if(rank[pv]<rank[pu])parent[pv]=pu;
            else
            {
                parent[pu]=pv;
                rank[pv]++;
            }
            return true;
        }
    };
    int minCostConnectPoints(vector<vector<int>>& points){
    int n=points.size();
    vector<tuple<int,int,int>>edges;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int dist=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
            edges.push_back({dist,i,j});
        }
    }   
    sort(edges.begin(),edges.end());
    DSU dsu(n);
    int total=0,edges_used=0;
    for( auto& [cost,u,v]:edges)
    {
        if(dsu.unite(u,v))
        {
            total+=cost;
            if(edges_used==n-1)break;
        }
    } 
    return total;    
    }
};