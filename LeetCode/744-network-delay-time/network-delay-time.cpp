class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k){
      vector<vector<pair<int,int>>>graph(n+1);
      for(auto& edge:times)
      {
        graph[edge[0]].push_back({edge[1],edge[2]});
      }
      vector<int>dist(n+1,INT_MAX);
      dist[k]=0;
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
      pq.push({0,k});
      while(!pq.empty())
      {
        int time=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        if(time > dist[node]) continue;
        for(auto src:graph[node])
        {
            if(time+src.second<dist[src.first])
            {dist[src.first]=time+src.second;
            pq.push({dist[src.first],src.first});}
        }
      }  
    int maxi=*max_element(dist.begin()+1,dist.end());
    if(maxi==INT_MAX)return -1;return maxi;
    }
};