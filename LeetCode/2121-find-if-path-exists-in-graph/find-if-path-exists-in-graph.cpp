/*
By   :: savetrees
Used :: BFS
*/
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int y=edges.size();
        unordered_map<int,vector<int>> graph;
        for(int i=0;i<y;i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n,false);
        queue<int> q;
        q.push(source);
        vis[source]=true;
        while(!q.empty()){
            int temp = q.front();
            if(temp==destination){
                return true;
            }
            q.pop();
            for(int i=0;i<graph[temp].size();i++){
                if(vis[graph[temp][i]]==false){
                    vis[graph[temp][i]] = true;
                    q.push(graph[temp][i]);
                }
            }
        }
        return false;
    }
};