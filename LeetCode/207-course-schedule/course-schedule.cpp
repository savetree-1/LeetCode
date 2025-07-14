class Solution {
public:
    bool dfs(vector<vector<int>>&adj,vector<bool>&vis,int node,vector<bool>&path)
    {
        path[node]=true;
        vis[node]=true;
        for(int neigh:adj[node])
        {
            if(!vis[neigh])
            {
                if(dfs(adj,vis,neigh,path))return true;
            }
            else if(path[neigh])return true;
        }
        path[node]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& pre){
        vector<vector<int>>adj(numCourses);
        vector<bool> vis(numCourses, false);
        vector<bool> path(numCourses, false);
        for(auto arr:pre)
        {
            adj[arr[0]].push_back(arr[1]);
        }
        for(int i=0;i<numCourses;i++)
        {
            if(!vis[i])
            {    
                if(dfs(adj,vis,i,path))return false;
            }
        }
        return true; 
    }
};